/*
 * TestParser.cpp
 *
 *  Created on: Jun 6, 2013
 *      Author: zherr
 */

#include "TestParser.hh"
#include "../Helper/Parser.hh"
#include "../Command/Command.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>

CPPUNIT_TEST_SUITE_REGISTRATION(TestParser);

void TestParser::setUp(){

}

void TestParser::tearDown(){

}

void TestParser::testFunctions(){

	Command c0 = Command("Test", "", true);

	Command c1 = Parser::getCommand();

	CPPUNIT_ASSERT(c0 == c1);
	//cout << "First: " << c1.getPrimary() << endl;
	//cout << "Second: " << c1.getSecondary() << endl;
}
