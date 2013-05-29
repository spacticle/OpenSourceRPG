/*
 * TestLocation.hh
 *
 *  Created on: May 24, 2013
 *      Author: zherr
 */

#ifndef TESTLOCATION_HH_
#define TESTLOCATION_HH_
#include "../Model/Location.hh"
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class TestLocation : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestLocation);
	CPPUNIT_TEST(testDefaults);
	CPPUNIT_TEST(testPDefaults);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST(testPFunctions);
	CPPUNIT_TEST_SUITE_END();

private:
	Location testLevel, loc0, loc1, loc4, *loc2, *loc3;
	Location *equalTest;
public:
	void setUp();
	void tearDown();
protected:
	void testDefaults();
	void testPDefaults();
	void testFunctions();
	void testPFunctions();
};

#endif /* TESTLOCATION_HH_ */
