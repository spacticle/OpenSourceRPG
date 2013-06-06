/*
 * UI.cpp
 *
 *  Created on: Jun 5, 2013
 *      Author: zherr
 */

#include "UI.hh"
#include "../Helper/UI.hh"
#include <string>
#include <iostream>

using namespace std;

string UI::readLine(string prompt){
	cout << prompt;
	string line;
	cin >> line;
	return line;
}

char UI::readChar(string prompt){
	cout << prompt;
	string line;
	cin >> line;
	if(line.size() == 0){
		return ' ';
	}
	return line.at(0);
}

bool UI::agree(string question){
	string yesStr = "yYtT", noStr = "nNfF", legalStr = yesStr + noStr;
	char ans = readChar(question);
	while(legalStr.find(ans) == string::npos){
		cout << "Respond 'y or 'n':";
		ans = readChar(question);
	}
	return yesStr.find(ans) != string::npos;
}
