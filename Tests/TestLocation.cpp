/*
 * TestLocation.cpp
 *
 *  Created on: May 24, 2013
 *      Author: zherr
 */

#include "TestLocation.hh"
#include "../Model/Location.hh"
#include "../Model/Actor.hh"
#include "../Model/Inventory.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>

CPPUNIT_TEST_SUITE_REGISTRATION(TestLocation);

using namespace std;

void TestLocation::setUp(){
	loc0 = Location();
	loc1 = Location("The Shire", 4);
	loc2 = new Location();
	loc3 = new Location("Rivendell", 2);
}

void TestLocation::tearDown(){
	delete loc2;
	delete loc3;
}

void TestLocation::testDefaults(){
	CPPUNIT_ASSERT(strcmp(loc0.getName().c_str(), "default")==0);
	CPPUNIT_ASSERT(loc0.getLevel()==0);
	CPPUNIT_ASSERT(loc0.getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc0.listOccupants().size()==0);
	//
	CPPUNIT_ASSERT(strcmp(loc2->getName().c_str(), "default")==0);
	CPPUNIT_ASSERT(loc2->getLevel()==0);
	CPPUNIT_ASSERT(loc2->getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc2->listOccupants().size()==0);
}

void TestLocation::testFunctions(){

	CPPUNIT_ASSERT(strcmp(loc1.getName().c_str(), "The Shire")==0);
	cout << "Level: " << loc1.getLevel() << endl;
	CPPUNIT_ASSERT(loc1.getLevel()==4);
	CPPUNIT_ASSERT(loc1.getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc1.listOccupants().size()==0);
	//
	CPPUNIT_ASSERT(strcmp(loc3->getName().c_str(), "Rivendell")==0);
	CPPUNIT_ASSERT(loc3->getLevel()==2);
	CPPUNIT_ASSERT(loc3->getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc3->listOccupants().size()==0);
}
