/*
 * Parser.hh
 *
 *  Created on: Jun 5, 2013
 *      Author: zherr
 */

#ifndef PARSER_HH_
#define PARSER_HH_

class Command;

class Parser {
public:
	Parser(){};
	virtual ~Parser(){};

	static Command getCommand();
};

#endif /* PARSER_HH_ */
