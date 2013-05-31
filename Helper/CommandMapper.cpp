/*
 * CommandMapper.cpp
 *
 *  Created on: May 31, 2013
 *      Author: zherr
 */

#include "CommandMapper.hh"
#include "../Model/Game.hh"
#include "../Model/Response.hh"
#include <map>
#include <ostream>
#include <string>

using namespace std;

map<string, Response*> CommandMapper::responses;

void CommandMapper::init(Game *game){
	responses = map<string, Response*>();
	//here we will put various Commands (responses)
}

bool CommandMapper::isCommand(string cmd){
	return responses.at(cmd) != NULL; //test this
}

Response* CommandMapper::getResponse(string cmdWord){
	return responses.at(cmdWord);
}
