/*
 * Location.cpp
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#include <string.h>
#include <map>
#include <vector>
#include <algorithm>
#include "Location.hh"
#include "Actor.hh"
#include "Inventory.hh"

using namespace std;

Location::Location() {
	cellName = "default";
	level = 0;
	neighbors = map<Direction, Location*>();
	actors = vector<Actor*>();
	inventory = new Inventory();
}

//Location::Location(int lev, string name){
//	level = lev;
//	cellName = name;
//	neighbors = new map<Direction, const Location>();
//	actors = new vector<Actor>();
//	inventory = new Inventory();
//}

Location::Location( int level, std::string name)
:level(level),
 cellName(name)
{
	neighbors = std::map<Direction, Location*>();
	actors = std::vector<Actor*>();
	inventory = new Inventory();
};

//static bool deleteAll(std::pair<Direction, Location*> *theElt){
//	delete theElt->second;
//	return true;
//}
//
//static bool deleteAllActor(Actor *theElt){
//	delete theElt;
//	return true;
//}

Location::~Location() {
//  TODO delete inventory;
//	TODO delete actors;
//	TODO delete neighbors;
	for(int i = 0; i < actors.size(); i++){
		delete actors[i];
	}
	actors.clear();
	for(std::map<Direction, Location*>::iterator i = neighbors.begin(); i != neighbors.end(); ++i){
		delete (*i).second;
	}
	neighbors.clear();
	delete inventory;
}

void Location::addNeighbor(Direction d, Location *l){
	//TODO add exception
	//neighbors[d] = l;
	//std::pair<Direction, const Location>
	neighbors.insert(std::pair<Direction, Location*>(d, l));
}

void Location::enter(Actor *a){
	actors.push_back(a);
}

void Location::exit(Actor *a){
	for(vector<Actor*>::iterator it = actors.begin(); it != actors.end(); ++it){
		if(*it == a){
			actors.erase(it);//TODO
		}
	}
}

void Location::changeLevel(int l){
	level = l;
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



