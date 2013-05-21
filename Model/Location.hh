/*
 * Location.hh
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#ifndef LOCATION_HH_
#define LOCATION_HH_
#include "AbstractLocation.hh"
#include "Actor.hh"
#include "Inventory.hh"
#include <string.h>
#include <map>
#include <vector>

class Location : public AbstractLocation{
	std::string cellName;
	std::map<Direction, const Location&> neighbors;
	std::vector<Actor> actors;
	Inventory inventory;
	int level;

public:
	Location();
	Location(std::string name, int level);
	virtual ~Location();

	virtual void addNeighbor(Direction d, const Location &l);
	virtual std::map<Direction, const Location&> listNeighbors() const {return neighbors;}
	virtual inline std::vector<Actor> listOccupants() const {return actors;}
	virtual void enter(Actor a);
	virtual void exit(Actor a);
	virtual inline std::string getName() const {return cellName;}
	virtual inline Inventory getInventory() const {return inventory;}
	virtual inline int getLevel() {return level;}
};

#endif /* LOCATION_HH_ */
