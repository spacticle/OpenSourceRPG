/*
 * TestItem.hh
 *
 *  Created on: May 13, 2013
 *      Author: zherr
 */

#ifndef TESTITEM_HH_
#define TESTITEM_HH_
#include "../Model/Item.hh"
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class TestItem : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestItem);
	CPPUNIT_TEST(testDefaults);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST_SUITE_END();

private:
	Item i0, i1, *i2, *i3;
public:
	void setUp();
	void tearDown();
protected:
	void testDefaults();
	void testFunctions();

};

#endif /* TESTITEM_HH_ */
