/*
 * TestActor.hh
 *
 *  Created on: May 23, 2013
 *      Author: zherr
 */

#ifndef TESTACTOR_HH_
#define TESTACTOR_HH_
#include "../Model/Actor.hh"
#include "../Model/Location.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

class TestActor : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestActor);
	CPPUNIT_TEST(testDefaults);
	CPPUNIT_TEST(testPDefaults);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST(testPFunctions);
	CPPUNIT_TEST_SUITE_END();

private:
	Actor act0, act1, *act2, *act3;
	Actor testActor, *testActor0;
	Location loc0;
public:
	void setUp();
	void tearDown();
protected:
	void testDefaults();
	void testPDefaults();
	void testFunctions();
	void testPFunctions();
};

#endif /* TESTACTOR_HH_ */
