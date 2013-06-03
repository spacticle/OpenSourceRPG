/*
 * TestLevel.cpp
 *
 *  Created on: May 28, 2013
 *      Author: zherr
 */

#include "TestLevel.hh"
#include <cppunit/extensions/HelperMacros.h>
#include "../Model/Level.hh"
#include "../Model/Location.hh"
#include "../Model/Actor.hh"
#include <vector>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(TestLevel);

void TestLevel::setUp(){
	lev0 = Level();
	lev1 = Level(new Actor(), vector<Location*>(), vector<Actor*>());
	lev2 = new Level();
	lev3 = new Level(new Actor(), vector<Location*>(), vector<Actor*>());

	Location *loc = new Location(1, "test");
}

void TestLevel::tearDown(){
	delete lev2;
	delete lev3;
	delete loc;
}

void TestLevel::testDefaults(){
	CPPUNIT_ASSERT(lev0.getLevelLocations().size() == 0);
	CPPUNIT_ASSERT(strcmp(lev0.getMainPlayer()->getName().c_str(), "Default")==0);
	CPPUNIT_ASSERT(lev0.getMonsters().size()==0);
}

void TestLevel::testPDefaults(){
	CPPUNIT_ASSERT(lev2->getLevelLocations().size() == 0);
	CPPUNIT_ASSERT(strcmp(lev2->getMainPlayer()->getName().c_str(), "Default")==0);
	CPPUNIT_ASSERT(lev2->getMonsters().size()==0);
}

void TestLevel::testFunctions(){
	lev1.addLocation(loc);
	CPPUNIT_ASSERT(lev1.getLevelLocations().size()==1);
}

void TestLevel::testPFunctions(){
	lev3->addLocation(loc);
	CPPUNIT_ASSERT(lev3->getLevelLocations().size()==1);
}
