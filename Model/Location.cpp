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

Location::Location( int level, std::string name)
:level(level),
 cellName(name)
{
	neighbors = std::map<Direction, Location*>();
	actors = std::vector<Actor*>();
	inventory = new Inventory();
};

Location::~Location() {
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

Location::Location(const Location &loc) :
		actors(loc.actors.size()),
		neighbors(){

	for(int i = 0; i < loc.actors.size(); ++i){
		actors[i] = new Actor(*loc.actors[i]);
	}

	//TODO copy neighbors map
	for(map<Direction, Location*>::const_iterator iter = neighbors.begin(); iter != neighbors.end(); ++iter){
		neighbors[iter->first] = new Location(*(iter->second));
	}

	level = loc.level;
	cellName = loc.cellName;
	inventory = new Inventory(*loc.inventory);
}

//TODO Copy constructor
Location& Location::operator=(const Location &l){
	//if(this != &l){

	Location tmp( l );

//	inventory(tmp.inventory);//TODO or should tmo be 'l'?
//	actors(tmp.actors);
//	neighbors(tmp.neighbors);
	std::swap(inventory, tmp.inventory);
	std::swap(actors, tmp.actors);
	std::swap(neighbors, tmp.neighbors);
//	inventory = l.getLocInventory();
//	actors = l.listOccupants();
//	neighbors = l.listNeighbors();

	std::swap(cellName, tmp.cellName);
	std::swap(level, tmp.level);
	//}
	return *this;
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



