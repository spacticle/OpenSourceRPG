/*
 * Location.cpp
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#include "Location.hh"
#include "Actor.hh"
#include <string.h>
#include <map>
#include <vector>

using namespace std;

Location::Location() {
	cellName = "default";
	//neighbors = map<Direction, Location>();
	actors = vector<Actor>();
	inventory = Inventory();
	level = 0;
}

Location::Location(string name, int level){
	cellName = name;
	this->level = level;
	//neighbors = map<Direction, Location>();
	actors = vector<Actor>();
	inventory = Inventory();
}

Location::~Location() {
	// TODO Auto-generated destructor stub
}

void Location::addNeighbor(Direction d, const Location &l){
	//TODO add exception
	//neighbors[d] = l;
	//std::pair<Direction, const Location>
	neighbors.insert(std::pair<Direction, const Location&>(d, l));
}

void Location::enter(Actor a){
	actors.push_back(a);
}

void Location::exit(Actor a){
	for(vector<Actor>::iterator it = actors.begin(); it != actors.end(); ++it){
		if(*it == a){
			actors.erase(it);//TODO
		}
	}
}
