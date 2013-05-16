/*
 * TestInventory.cpp
 *
 *  Created on: May 14, 2013
 *      Author: zherr
 */

#include "TestInventory.hh"
#include "../Model/Item.hh"
#include "../Model/Inventory.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <list>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(TestInventory);

void TestInventory::setUp(){
	inv0 = Inventory();
	inv1 = Inventory(750);
	inv2 = new Inventory();
	inv3 = new Inventory(800);
}

void TestInventory::tearDown(){
	delete inv2;
	delete inv3;
}

void TestInventory::testDefaults(){
	CPPUNIT_ASSERT(inv0.getWeight()==0);
	CPPUNIT_ASSERT(inv0.getCapacity()==500);
	CPPUNIT_ASSERT(inv0.getinventory().size() == 0);

	//////////

	CPPUNIT_ASSERT(inv2->getWeight()==0);
	CPPUNIT_ASSERT(inv2->getCapacity()==500);
	CPPUNIT_ASSERT(inv2->getinventory().size() == 0);

}

void TestInventory::testFunctions(){
	CPPUNIT_ASSERT(inv1.getCapacity()==750);
	CPPUNIT_ASSERT(inv1.getWeight()==0);
	CPPUNIT_ASSERT(inv1.getinventory().size()==0);


	CPPUNIT_ASSERT(inv3->getCapacity()==800);
	CPPUNIT_ASSERT(inv3->getWeight()==0);
	CPPUNIT_ASSERT(inv3->getinventory().size()==0);
}
