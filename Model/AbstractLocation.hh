/*
 * Location.hh
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#ifndef Location_HH_
#define Location_HH_
#include <map>
#include <vector>
#include <string.h>
#include <string>
#include "AbstractActor.hh"

class Location;
class Inventory;
class Actor;

typedef enum Direction{
	North, South,
	East, West,
	Up, Down
} Direction;

class AbstractLocation {
public:
	AbstractLocation(){};
	virtual ~AbstractLocation();

	virtual void addNeighbor(Direction d, Location &l) = 0;
	virtual std::map<Direction, const Location&> listNeighbors() const= 0;
	virtual inline std::vector<Actor> listOccupants() const= 0;
	virtual void enter(Actor a) = 0;
	virtual void exit(Actor a) = 0;
	virtual inline std::string getName() const= 0;
	virtual inline Inventory getLocInventory() const= 0;
	virtual inline int getLevel() = 0;
};

#endif /* Location_HH_ */
