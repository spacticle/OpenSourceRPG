/*
 * TestCommandMapper.cpp
 *
 *  Created on: Jun 3, 2013
 *      Author: zherr
 */

#include "TestCommandMapper.hh"
#include <cppunit/extensions/HelperMacros.h>
#include "../Model/Game.hh"
#include "../Model/Response.hh"
#include <string>
#include <stdexcept>

CPPUNIT_TEST_SUITE_REGISTRATION(TestCommandMapper);

void TestCommandMapper::setUp(){
	cmdMapper0 = CommandMapper();
}

void TestCommandMapper::tearDown(){
}

void TestCommandMapper::testFunctions(){
	CPPUNIT_ASSERT_NO_THROW(CommandMapper::init(g0));
	CPPUNIT_ASSERT(!CommandMapper::isCommand("test"));
	CPPUNIT_ASSERT(CommandMapper::getResponse("test") == NULL);

}
