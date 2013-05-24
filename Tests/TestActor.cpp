/*
 * TestActor.cpp
 *
 *  Created on: May 23, 2013
 *      Author: zherr
 */

#include "TestActor.hh"
#include "../Model/Actor.hh"
#include "../Model/Location.hh"
#include "../Model/Inventory.hh"
#include <cppunit/extensions/HelperMacros.h>

CPPUNIT_TEST_SUITE_REGISTRATION(TestActor);

void TestActor::setUp(){
	act0 = Actor();
	act1 = Actor("Boss", 450, 300);
	act2 = new Actor();
	act3 = new Actor("Monster", 300, 250);
}

void TestActor::tearDown(){
	delete act2;
	delete act3;
}

void TestActor::testDefaults(){//TODO something in here causing segmentation fault
	CPPUNIT_ASSERT(strcmp(act0.getName().c_str(), "Default") == 0);
	CPPUNIT_ASSERT(act0.getHealth() == 100);
	CPPUNIT_ASSERT(act0.getBaseDamage() == 100);
	CPPUNIT_ASSERT(strcmp(act0.getCurrentLocation()->getName().c_str(), "default") == 0);
	CPPUNIT_ASSERT(act0.getActorInventory()->listInventory().size() == 0);
	///////
	CPPUNIT_ASSERT(strcmp(act2->getName().c_str(), "Default") == 0);
	CPPUNIT_ASSERT(act2->getHealth() == 100);
	CPPUNIT_ASSERT(act2->getBaseDamage() == 100);
	CPPUNIT_ASSERT(strcmp(act2->getCurrentLocation()->getName().c_str(), "default") == 0);
	CPPUNIT_ASSERT(act2->getActorInventory()->listInventory().size() == 0);
}

void TestActor::testFunctions(){
	CPPUNIT_ASSERT(strcmp(act1.getName().c_str(), "Boss") == 0);
	CPPUNIT_ASSERT(act1.getHealth() == 450);
	CPPUNIT_ASSERT(act1.getBaseDamage() == 300);
	CPPUNIT_ASSERT(strcmp(act1.getCurrentLocation()->getName().c_str(), "default") == 0);
	//
	act1.alterHealth(-50);
	CPPUNIT_ASSERT(act1.getHealth() == 400);
	Actor testActor = Actor("Boss", 450, 300);
	CPPUNIT_ASSERT(act1 == testActor);
	// Test location change
	CPPUNIT_ASSERT(strcmp(act1.getCurrentLocation()->getName().c_str(), "default")==0);
	Location loc0 = Location("Mordor", 1);
	act1.setCurrentLocation(loc0);
	CPPUNIT_ASSERT(strcmp(act1.getCurrentLocation()->getName().c_str(), "Mordor")==0);
	// Test inventory handling
	CPPUNIT_ASSERT(act1.getActorInventory()->getCapacity()==500);

	/** */
	CPPUNIT_ASSERT(strcmp(act3->getName().c_str(), "Monster") == 0);
	CPPUNIT_ASSERT(act3->getHealth() == 300);
	CPPUNIT_ASSERT(act3->getBaseDamage() == 250);
	CPPUNIT_ASSERT(strcmp(act3->getCurrentLocation()->getName().c_str(), "default") == 0);
	//
	act3->alterHealth(-50);
	CPPUNIT_ASSERT(act3->getHealth() == 250);
	Actor *testActor0 = new Actor("Monster", 300, 250);
	CPPUNIT_ASSERT(*act3 == *testActor0);
	// Test location change
	CPPUNIT_ASSERT(strcmp(act3->getCurrentLocation()->getName().c_str(), "default")==0);
	act3->setCurrentLocation(loc0);
	CPPUNIT_ASSERT(strcmp(act3->getCurrentLocation()->getName().c_str(), "Mordor")==0);
	// Test inventory handling
	CPPUNIT_ASSERT(act3->getActorInventory()->getCapacity()==500);

}









