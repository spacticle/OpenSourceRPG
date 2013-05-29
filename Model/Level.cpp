/*
 * Level.cpp
 *
 *  Created on: May 28, 2013
 *      Author: zherr
 */

#include "Level.hh"
#include "Actor.hh"
#include "Location.hh"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

Level::Level() {
	mainPlayer = new Actor();
	locations = vector<Location*>();
	monsters = vector<Actor*>();
}

Level::Level(Actor *mp, std::vector<Location*> locs, std::vector<Actor*> monsts){
	mainPlayer = mp;
	locations = locs;
	monsters = monsts;
}

//static bool deleteAllLocation(Location *theElt){
//	delete theElt;
//	return true;
//}
//
//static bool deleteAllActor(Actor *theElt){
//	delete theElt;
//	return true;
//}

Level::~Level() {
	// TODO Auto-generated destructor stub
	//remove_if(locations.begin(), locations.end(), deleteAllLocation);
	//remove_if(monsters.begin(), monsters.end(), deleteAllActor);
	for(int i = 0; i < locations.size(); i++){
		delete locations[i];
	}
	locations.clear();
	for(int j = 0; j < monsters.size(); j++){
		delete monsters[j];
	}
	monsters.clear();
	delete mainPlayer;
}

void Level::addLocation(Location *loc){
	locations.push_back(loc);
}
