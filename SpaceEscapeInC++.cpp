//============================================================================
// Name        : SpaceEscapeInC++.cpp
// Author      : Zachary Herr
// Version     :
// Copyright   : 
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <string>
#include "Command/Command.hh"

using namespace std;

int main(int argc, char **argv) {
	string s = "Hello World!";
	cout << s << endl;

	Command cmd = Command("Drop", "", true);
	if(!(strcmp(cmd.getPrimary().c_str(), "Drop") == 0)){ cout << "ERROR LINE 21" << endl;}

	return EXIT_SUCCESS;
}
