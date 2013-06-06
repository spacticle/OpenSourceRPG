/*
 * Parser.cpp
 *
 *  Created on: Jun 5, 2013
 *      Author: zherr
 */

#include "Parser.hh"
#include "../Command/Command.hh"
#include "../Helper/CommandMapper.hh"
#include "UI.hh"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

Command Parser::getCommand(){
	vector<string> tokens;
	string word1 = "";
	string word2 = "";

	string line = UI::readLine("> ");

	istringstream iss(line);
	copy(istream_iterator<string>(iss),
	         istream_iterator<string>(),
	         back_inserter<vector<string> >(tokens));

	if(tokens.size() >= 1){
		word1 = tokens[0];
		cout << "GOT IT: " << word1 << endl;
	}else{ word1 = ""; }

	if(tokens.size() >= 2){
		word2 = tokens[1];
	}else{ word2 = ""; }

	if(CommandMapper::isCommand(word1)){
		cout << endl;
		return Command(word1, word2, true);
	}
	cout << endl;
	return Command("", word2, false);

}
