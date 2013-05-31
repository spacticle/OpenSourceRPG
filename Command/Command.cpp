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

Command::Command(const Command &com):
	primaryCmd(com.primaryCmd),
	secondaryCmd(com.secondaryCmd),
	enabled(com.enabled){
}

Command& Command::operator =(const Command &com){
	Command tmp( com );
	std::swap(primaryCmd, tmp.primaryCmd);
	std::swap(secondaryCmd, tmp.secondaryCmd);
	std::swap(enabled, tmp.enabled);

	return *this;
}

bool Command::isEnabled(){ return enabled; }

bool Command::hasSecondCmd(){ return (strcmp(secondaryCmd.c_str(), "") != 0);}

string Command::getPrimary(){ return primaryCmd; }

string Command::getSecondary(){ return secondaryCmd; }

void Command::enable(bool b){
	enabled = b;
}



