/*
 * UI.hh
 *
 *  Created on: Jun 5, 2013
 *      Author: zherr
 */

#ifndef UI_HH_
#define UI_HH_
#include <string>

class UI {
public:
	UI(){};
	virtual ~UI(){};

	static std::string readLine(std::string prompt);
	static char readChar(std::string prompt);
	static bool agree(std::string question);
};

#endif /* UI_HH_ */
