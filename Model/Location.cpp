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
	neighbors = map<Direction, const Location>();
	actors = vector<Actor>();
	inventory = new Inventory();
	level = 0;
}

Location::Location(string name, int lev){
	cellName = name;
	level = lev;
	neighbors = map<Direction, const Location>();
	actors = vector<Actor>();
	inventory = new Inventory();
}

Location::~Location() {
	delete inventory;
}

void Location::addNeighbor(Direction d, const Location l){
	//TODO add exception
	//neighbors[d] = l;
	//std::pair<Direction, const Location>
	neighbors.insert(std::pair<Direction, const Location>(d, l));
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

Location &Location::operator=(const Location l){
	if(this != &l){
		cellName = l.getName();
		neighbors = l.listNeighbors();
		actors = l.listOccupants();
		inventory = l.getLocInventory();
		//level = l.getLevel();
	}
	return *this;
}



