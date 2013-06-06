/*
 * TestUI.cpp
 *
 *  Created on: Jun 6, 2013
 *      Author: zherr
 */

#include "TestUI.hh"
#include "../Helper/UI.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <string>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(TestUI);

void TestUI::setUp(){

}

void TestUI::tearDown(){

}

void TestUI::testFunctions(){

	string line;
	char ch;
	bool ans;

	CPPUNIT_ASSERT_NO_THROW(line = UI::readLine("Please enter something: "));
	CPPUNIT_ASSERT(line.size() >= 0);
	cout << "What you entered: " << line << endl;

	CPPUNIT_ASSERT_NO_THROW(ch = UI::readChar("Please enter a character: "));
	CPPUNIT_ASSERT(sizeof(ch) == 1);
	cout << "What you entered, first character: " << ch << endl;

	CPPUNIT_ASSERT_NO_THROW(ans = UI::agree("Do you like chocolate? "));
	CPPUNIT_ASSERT(ans == true);

}
