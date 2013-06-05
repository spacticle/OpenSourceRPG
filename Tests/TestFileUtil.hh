/*
 * TestFileUtil.hh
 *
 *  Created on: Jun 4, 2013
 *      Author: zherr
 */

#ifndef TESTFILEUTIL_HH_
#define TESTFILEUTIL_HH_
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

class TestFileUtil : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestFileUtil);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();
protected:
	void testFunctions();

};

#endif /* TESTFILEUTIL_HH_ */
