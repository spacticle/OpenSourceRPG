/*
 * Command.hh
 *
 *  Created on: May 8, 2013
 *      Author: zherr
 */

#ifndef COMMAND_HH_
#define COMMAND_HH_
#include <string>

class Command {
	public:
		Command();
		virtual ~Command();
		Command(std::string primary, std::string secondary, bool enabled = true);
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
