/*
 * Command.cpp
 *
 *  Created on: May 8, 2013
 *      Author: zherr
 */

#include "Command.hh"
#include <string>
#include <string.h>

using namespace std;

Command::Command() {
	primaryCmd = "";
	secondaryCmd = "";
	enabled = true;
}

Command::Command(const string primary, const string secondary, bool enabled){
	this->enabled = enabled;
	primaryCmd = primary;
	secondaryCmd = secondary;
}

Command::~Command() {
	// TODO Auto-generated destructor stub
}

bool Command::isEnabled(){ return enabled; }

bool Command::hasSecondCmd(){ return (strcmp(secondaryCmd.c_str(), "") != 0);}

string Command::getPrimary(){ return primaryCmd; }

string Command::getSecondary(){ return secondaryCmd; }

void Command::enable(bool b){
	enabled = b;
}



