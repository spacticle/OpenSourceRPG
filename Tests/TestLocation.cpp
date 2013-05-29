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
	loc1 = Location(4, "Mordor");
	testLevel = Location(6, "TestLevel");
	loc2 = new Location();
	loc3 = new Location(2, "Rivendell");
	equalTest = new Location(1, "Rivendell");
}

void TestLocation::tearDown(){
	delete loc2;
	delete loc3;
	delete equalTest;
}

void TestLocation::testDefaults(){
	CPPUNIT_ASSERT(strcmp(loc0.getName().c_str(), "default")==0);
	CPPUNIT_ASSERT(loc0.getLevel()==0);
	CPPUNIT_ASSERT(loc0.getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc0.listOccupants().size()==0);
}

void TestLocation::testPDefaults(){
	CPPUNIT_ASSERT(strcmp(loc2->getName().c_str(), "default")==0);
	CPPUNIT_ASSERT(loc2->getLevel()==0);
	CPPUNIT_ASSERT(loc2->getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc2->listOccupants().size()==0);
}

void TestLocation::testFunctions(){

	CPPUNIT_ASSERT(strcmp(loc1.getName().c_str(), "Mordor")==0);
	CPPUNIT_ASSERT(loc1.getLevel()==4);//TODO this should NOT be failing
	//
	CPPUNIT_ASSERT(testLevel.getLevel()==6);
	//
	loc1.changeLevel(2);
	CPPUNIT_ASSERT(loc1.getLevel()==2);
	CPPUNIT_ASSERT(loc1.getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc1.listOccupants().size()==0);
	//

}

void TestLocation::testPFunctions(){

	CPPUNIT_ASSERT(*equalTest == *loc3);

	CPPUNIT_ASSERT(strcmp(loc3->getName().c_str(), "Rivendell")==0);
	CPPUNIT_ASSERT(loc3->getLevel()==2);
	loc3->changeLevel(3);
	CPPUNIT_ASSERT(loc3->getLevel()==3);
	CPPUNIT_ASSERT(loc3->getLocInventory()->listInventory().size()==0);
	CPPUNIT_ASSERT(loc3->listOccupants().size()==0);
}
