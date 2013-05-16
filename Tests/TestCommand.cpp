/*
 * TestCommand.cpp
 *
 *  Created on: May 9, 2013
 *      Author: zherr
 */

#include "TestCommand.hh"
#include "../Command/Command.hh"
#include <cppunit/TestFixture.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestAssert.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestResult.h>
#include <cppunit/extensions/HelperMacros.h>
#include <string.h>
#include <iostream>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION( TestCommand );

void TestCommand::setUp(){
	c0 = Command();
	c1 = Command("Move", "North");
	c2 = new Command();
	c3 = new Command("Drop", "", false);
}

void TestCommand::tearDown(){
	delete c2;
	delete c3;
}

void TestCommand::testDefault(){
	CPPUNIT_ASSERT_ASSERTION_FAIL(CPPUNIT_ASSERT((strcmp(c0.getPrimary().c_str(), "test") == 16)));
	CPPUNIT_ASSERT(strcmp(c0.getPrimary().c_str(), "")==0);
	CPPUNIT_ASSERT(strcmp(c0.getSecondary().c_str(), "")==0);
	CPPUNIT_ASSERT(!c0.hasSecondCmd());
	CPPUNIT_ASSERT(c0.isEnabled());
}

void TestCommand::testPDefault(){
	CPPUNIT_ASSERT_ASSERTION_FAIL(CPPUNIT_ASSERT(strcmp((c2->getPrimary()).c_str(), "test")==0));
	CPPUNIT_ASSERT(strcmp((c2->getPrimary()).c_str(), "")==0);
	CPPUNIT_ASSERT(strcmp((c2->getSecondary()).c_str(), "")==0);
	CPPUNIT_ASSERT(!(c2->hasSecondCmd()));
	CPPUNIT_ASSERT(c2->isEnabled());
}

void TestCommand::testFunctions(){
	CPPUNIT_ASSERT(strcmp(c1.getPrimary().c_str(), "Move")==0);
	CPPUNIT_ASSERT(strcmp(c1.getSecondary().c_str(), "North")==0);
	CPPUNIT_ASSERT(c1.hasSecondCmd());
	CPPUNIT_ASSERT(c1.isEnabled());
}

void TestCommand::testPFunctions(){
	CPPUNIT_ASSERT_ASSERTION_FAIL(CPPUNIT_ASSERT(strcmp((c3->getPrimary()).c_str(), "test")==0));
	CPPUNIT_ASSERT(strcmp((c3->getPrimary()).c_str(), "Drop")==0);
	CPPUNIT_ASSERT(strcmp((c3->getSecondary()).c_str(), "")==0);
	CPPUNIT_ASSERT(!(c3->hasSecondCmd()));
	CPPUNIT_ASSERT(!c3->isEnabled());
}
