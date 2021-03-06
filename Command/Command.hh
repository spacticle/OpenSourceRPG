/*
 * Command.hh
 *
 *  Created on: May 8, 2013
 *      Author: zherr
 */

#ifndef COMMAND_HH_
#define COMMAND_HH_
#include <string>
#include <string.h>

using namespace std;

class Command {
	public:
		Command();
		virtual ~Command();
		Command(std::string primary, std::string secondary, bool enabled = true);
		Command(const Command&);
		virtual Command& operator=(const Command&);
		virtual inline bool operator==(Command com){
			if(strcmp(this->primaryCmd.c_str(), com.primaryCmd.c_str()) == 0 &&
					strcmp(this->secondaryCmd.c_str(), com.secondaryCmd.c_str()) ==0){
				return true;

			}else{ return false; }
		}
		virtual bool isEnabled();
		virtual bool hasSecondCmd();
		virtual std::string getPrimary();
		virtual std::string getSecondary();
	private:
		std::string primaryCmd;
		std::string secondaryCmd;
		bool enabled;
	protected:
		virtual void enable(bool);
};

#endif /* COMMAND_HH_ */
