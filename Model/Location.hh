/*
 * Location.hh
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#ifndef LOCATION_HH_
#define LOCATION_HH_
#include <string.h>
#include <string>
#include <map>
#include <vector>

class Actor;
class Inventory;

typedef enum Direction{
	North, South,
	East, West,
	Up, Down
} Direction;

class Location {
public:
	Location();
	Location(std::string name, int level);
	virtual ~Location();

	virtual void addNeighbor(Direction d, const Location l);
	virtual std::map<Direction, const Location> listNeighbors() const {return neighbors;}
	virtual inline std::vector<Actor> listOccupants() const {return actors;}
	virtual void enter(Actor a);
	virtual void exit(Actor a);
	virtual inline std::string getName() const {return cellName;}
	virtual inline Inventory *getLocInventory() const {return inventory;}
	virtual inline int getLevel() {return level;}
	virtual Location & operator=(const Location);
private:
	int level;
	std::string cellName;
	std::map<Direction, const Location> neighbors;
	std::vector<Actor> actors;
	Inventory *inventory;
};

#endif /* LOCATION_HH_ */
