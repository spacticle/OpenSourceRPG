/*
 * TestUI.hh
 *
 *  Created on: Jun 6, 2013
 *      Author: zherr
 */

#ifndef TESTUI_HH_
#define TESTUI_HH_
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

class TestUI : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestUI);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

protected:
	void testFunctions();
};

#endif /* TESTUI_HH_ */
