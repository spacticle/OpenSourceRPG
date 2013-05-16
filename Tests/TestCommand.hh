/*
 * TestCommand.hh
 *
 *  Created on: May 9, 2013
 *      Author: zherr
 */

#ifndef TESTCOMMAND_HH_
#define TESTCOMMAND_HH_
#include "../Command/Command.hh"
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class TestCommand : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestCommand);
	CPPUNIT_TEST(testDefault);
	CPPUNIT_TEST(testPDefault);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST(testPFunctions);
	CPPUNIT_TEST_SUITE_END();

private:
	Command c0, c1, *c2, *c3;
public:
	void setUp();
	void tearDown();
protected:
	void testDefault();
	void testPDefault();
	void testFunctions();
	void testPFunctions();

};

#endif /* TESTCOMMAND_HH_ */
