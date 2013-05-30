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
private:
	int level;
	std::string cellName;
	std::map<Direction, Location*> neighbors;
	std::vector<Actor*> actors;
	Inventory *inventory;
public:
	Location();
	Location( int level, std::string name);
	virtual ~Location();
	Location(const Location& another);

	virtual void addNeighbor(Direction d, Location *l);
	virtual std::map<Direction, Location*> listNeighbors() const {return neighbors;}
	virtual inline std::vector<Actor*> listOccupants() const {return actors;}
	virtual void enter(Actor *a);
	virtual void exit(Actor *a);
	virtual void changeLevel(int l);
	virtual inline std::string getName() const {return cellName;}
	virtual inline Inventory *getLocInventory() const {return inventory;}
	virtual inline int getLevel() {return level;}
	virtual Location & operator=(const Location&);
	virtual inline bool operator==(Location l){
		if(strcmp(this->cellName.c_str(), l.cellName.c_str())==0){
			return true;
		}else{ return false; }
	}
};

#endif /* LOCATION_HH_ */
