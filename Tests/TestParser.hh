/*
 * TestParser.hh
 *
 *  Created on: Jun 6, 2013
 *      Author: zherr
 */

#ifndef TESTPARSER_HH_
#define TESTPARSER_HH_
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class TestParser : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestParser);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();
protected:
	void testFunctions();
};

#endif /* TESTPARSER_HH_ */
