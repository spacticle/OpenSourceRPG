/*
 * DefaultTestResponse.hh
 *
 *  Created on: Jun 6, 2013
 *      Author: zherr
 */

#ifndef DEFAULTTESTRESPONSE_HH_
#define DEFAULTTESTRESPONSE_HH_
#include "../Model/Response.hh"
#include "../Command/Command.hh"

class DefaultTestResponse : public Response{
public:
	DefaultTestResponse();
	virtual ~DefaultTestResponse();
	virtual bool execute(Command &);
};

#endif /* DEFAULTTESTRESPONSE_HH_ */
