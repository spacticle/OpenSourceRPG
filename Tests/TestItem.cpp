/*
 * TestItem.cpp
 *
 *  Created on: May 13, 2013
 *      Author: zherr
 */

#include "TestItem.hh"
#include "../Model/Item.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <string.h>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(TestItem);

void TestItem::setUp(){
	i0 = Item();
	i1 = Item("Sword", "a sharp sword", 130);
	i2 = new Item();
	i3 = new Item("Shield", "a wooden shield", 50);
}

void TestItem::tearDown(){
	delete i2;
	delete i3;
}

void TestItem::testDefaults(){
	CPPUNIT_ASSERT((strcmp(i0.getName().c_str(), "")==0));
	CPPUNIT_ASSERT((strcmp(i0.getDescr().c_str(), "")==0));
	CPPUNIT_ASSERT(i0.getWeight()==0);

	CPPUNIT_ASSERT((strcmp((i2->getName()).c_str(), "")==0));
	CPPUNIT_ASSERT((strcmp((i2->getDescr()).c_str(), "")==0));
	CPPUNIT_ASSERT(i2->getWeight()==0);
}

void TestItem::testFunctions(){
	CPPUNIT_ASSERT((strcmp(i1.getName().c_str(), "Sword")==0));
	CPPUNIT_ASSERT((strcmp(i1.getDescr().c_str(), "a sharp sword")==0));
	CPPUNIT_ASSERT(i1.getWeight()==130);

	CPPUNIT_ASSERT((strcmp((i3->getName()).c_str(), "Shield")==0));
	CPPUNIT_ASSERT((strcmp((i3->getDescr()).c_str(), "a wooden shield")==0));
	CPPUNIT_ASSERT(i3->getWeight()==50);
}
