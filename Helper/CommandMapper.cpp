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
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

map<string, Response*> CommandMapper::responses;

void CommandMapper::init(Game *game){
	responses = map<string, Response*>();
	//here we will put various Commands (responses)
}

bool CommandMapper::isCommand(string cmd){
	try{
		responses.at(cmd);
	}catch(std::out_of_range &oor){
		cout << oor.what() << endl;
		return false;
	}
	return true;

}

Response* CommandMapper::getResponse(string cmdWord){

	try{
		responses.at(cmdWord);
	}catch(std::out_of_range &oor){
		cout<< oor.what() << endl;
		return NULL;
	}
	return responses.at(cmdWord);
}
