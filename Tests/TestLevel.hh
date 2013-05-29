/*
 * TestLevel.hh
 *
 *  Created on: May 28, 2013
 *      Author: zherr
 */

#ifndef TESTLEVEL_HH_
#define TESTLEVEL_HH_
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Model/Level.hh"
#include "../Model/Location.hh"

class TestLevel : public CppUnit::TestFixture {

	CPPUNIT_TEST_SUITE(TestLevel);
	CPPUNIT_TEST(testDefaults);
	CPPUNIT_TEST(testPDefaults);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST(testPFunctions);
	CPPUNIT_TEST_SUITE_END();

	Level lev0, lev1, *lev2, *lev3;
	Location *loc;

public:
	void setUp();
	void tearDown();
protected:
	void testDefaults();
	void testPDefaults();
	void testFunctions();
	void testPFunctions();
};

#endif /* TESTLEVEL_HH_ */
