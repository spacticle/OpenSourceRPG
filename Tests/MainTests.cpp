/*
 * MainTests.cpp
 *
 *  Created on: May 10, 2013
 *      Author: zherr
 */

#include "MainTests.hh"
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

Main_Tests::Main_Tests() {
	// TODO Auto-generated constructor stub

}

Main_Tests::~Main_Tests() {
	// TODO Auto-generated destructor stub
}

int main(int argc, char **argv){

	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
	runner.addTest(registry.makeTest());
	runner.run();
	return 0;
}
