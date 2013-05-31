/*
 * CommandMapper.hh
 *
 *  Created on: May 31, 2013
 *      Author: zherr
 */

#ifndef COMMANDMAPPER_HH_
#define COMMANDMAPPER_HH_
#include <map>
#include <string>
#include <ostream>

class Response;
class Game;

class CommandMapper {
private:
	static std::map<std::string, Response*> responses;
public:
	CommandMapper(){};
	virtual ~CommandMapper(){};
	static void init(Game *);
	static bool isCommand(std::string);
	static Response* getResponse(std::string cmdWord);
//	friend std::ostream& operator<<(std::ostream& os, const CommandMapper& cMap){ //similar to overriding toString in Java
//		std::string s = "";
//		//add commands to string
//		for(std::map<std::string, Response*>::iterator it = responses.begin(); it != responses.end(); ++it){
//			s += (*it).first;
//			s += "\n";
//		}
//		return os << s;
//	}
};

#endif /* COMMANDMAPPER_HH_ */
