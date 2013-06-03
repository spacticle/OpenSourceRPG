/*
 * TestCommandMapper.hh
 *
 *  Created on: Jun 3, 2013
 *      Author: zherr
 */

#ifndef TESTCOMMANDMAPPER_HH_
#define TESTCOMMANDMAPPER_HH_
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Helper/CommandMapper.hh"
#include "../Model/Game.hh"
#include "../Model/Response.hh"

class TestCommandMapper : public CppUnit::TestFixture{

	CPPUNIT_TEST_SUITE(TestCommandMapper);
	CPPUNIT_TEST(testFunctions);
	CPPUNIT_TEST_SUITE_END();

	CommandMapper cmdMapper0, *cmdMapper1;
	Game *g0;

public:
	void setUp();
	void tearDown();
protected:
	void testFunctions();

};

#endif /* TESTCOMMANDMAPPER_HH_ */
