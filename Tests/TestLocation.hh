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
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST_SUITE_END();

private:
	Location loc0, loc1, *loc2, *loc3;
public:
	void setUp();
	void tearDown();
protected:
	void testDefaults();
	void testFunctions();
};

#endif /* TESTLOCATION_HH_ */
