/*
 * TestInventory.hh
 *
 *  Created on: May 14, 2013
 *      Author: zherr
 */

#ifndef TESTINVENTORY_HH_
#define TESTINVENTORY_HH_
#include "../Model/Inventory.hh"
#include "../Model/Item.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

class TestInventory : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestInventory);
	CPPUNIT_TEST(testDefaults);
	CPPUNIT_TEST(testPDefaults);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST(testPFunctions);
	CPPUNIT_TEST_SUITE_END();

private:
	Inventory inv0, inv1, *inv2, *inv3;
	Item item0, item2, heavy, *item1;
public:
	void setUp();
	void tearDown();
protected:
	void testDefaults();
	void testPDefaults();
	void testFunctions();
	void testPFunctions();

};

#endif /* TESTINVENTORY_HH_ */
