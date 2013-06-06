/*
 * DefaultTestResponse.cpp
 *
 *  Created on: Jun 6, 2013
 *      Author: zherr
 */

#include "DefaultTestResponse.hh"
#include "../Model/Response.hh"
#include "../Command/Command.hh"

DefaultTestResponse::DefaultTestResponse() {
	// TODO Auto-generated constructor stub

}

DefaultTestResponse::~DefaultTestResponse() {
	// TODO Auto-generated destructor stub
}

bool DefaultTestResponse::execute(Command &com){

	return true;
}
