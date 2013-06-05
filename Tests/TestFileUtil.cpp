/*
 * TestFileUtil.cpp
 *
 *  Created on: Jun 4, 2013
 *      Author: zherr
 */

#include "TestFileUtil.hh"
#include "../Helper/FileUtil.hh"
#include <cppunit/extensions/HelperMacros.h>
#include <string>
#include <iostream>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(TestFileUtil);

void TestFileUtil::setUp(){

}

void TestFileUtil::tearDown(){

}

void TestFileUtil::testFunctions(){
	string test = "Position of the first character to be copied as a substring. "
			"If this is equal to the string length, the function returns an empty string."
			"If this is greater than the string length, it throws out_of_range."
			"Note: The first character is denoted by a value of 0 (not 1).";

	CPPUNIT_ASSERT_NO_THROW(test = FileUtil::lineWrap(test, 10));
	cout << test << endl;
}
