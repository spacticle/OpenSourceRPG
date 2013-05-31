/*
 * Response.hh
 *
 *  Created on: May 31, 2013
 *      Author: zherr
 */

#ifndef RESPONSE_HH_
#define RESPONSE_HH_

class Command;

class Response {
public:
	Response(){};
	virtual ~Response(){};
	virtual bool execute(Command &) = 0;
};

#endif /* RESPONSE_HH_ */
