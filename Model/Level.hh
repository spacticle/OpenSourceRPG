/*
 * Level.hh
 *
 *  Created on: May 28, 2013
 *      Author: zherr
 */

#ifndef LEVEL_HH_
#define LEVEL_HH_
#include <vector>
#include <string>

class Location;
class Actor;

class Level {

public:
	Level();
	Level(Actor *mp, std::vector<Location*> locs, std::vector<Actor*> monsts);
	virtual ~Level();

	virtual inline std::vector<Location*> getLevelLocations() const{ return locations;}
	virtual inline std::vector<Actor*> getMonsters() const{ return monsters;}
	virtual inline void clearLocations(){ locations.clear();}
	virtual inline Actor *getMainPlayer(){ return mainPlayer; }//const?
	virtual void addLocation(Location* loc);
	//virtual Location* getLocation(std::string name) const;

private:
	std::vector<Location*> locations;
	Actor *mainPlayer;
	std::vector<Actor*> monsters;
};

#endif /* LEVEL_HH_ */
