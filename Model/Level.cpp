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

Level::Level(const Level &lev) :
	locations(lev.locations.size()),
	monsters(lev.monsters.size()){

	for(int i = 0; i < lev.locations.size(); ++i){
		locations[i] = new Location(*lev.locations[i]);
	}
	for(int j = 0; j < lev.monsters.size(); ++j){
		monsters[j] = new Actor(*lev.monsters[j]);
	}

	mainPlayer = new Actor(*lev.mainPlayer);
}

Level& Level::operator =(const Level &lev){

	Level tmp( lev );
	std::swap(mainPlayer, tmp.mainPlayer);
	std::swap(locations, tmp.locations);
	std::swap(monsters, tmp.monsters);

	return *this;
}

void Level::addLocation(Location *loc){
	locations.push_back(loc);
}
