/*
 * Actor.hh
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#ifndef ACTOR_HH_
#define ACTOR_HH_
#include <string>
#include <string.h>
#include "Inventory.hh"

class Location;

class Actor{
public:
	Actor();
	Actor(std::string name, int health, int baseDamage);
	virtual ~Actor();

	virtual void setCurrentLocation(Location &l);
	virtual inline Location *getCurrentLocation() const{ return currentLocation;}
	virtual inline std::string getName(){ return name;}
	virtual inline Inventory *getActorInventory() const{ return inventory;}
	virtual inline int getHealth(){ return health;}
	virtual void alterHealth(int var);
	virtual inline int getBaseDamage(){ return baseDamage;}
	virtual inline bool operator==(Actor a){
		if(strcmp(a.getName().c_str(), name.c_str()) == 0){
			return true;
		}else{return false;}
	}
private:
	std::string name;
	Location *currentLocation;
	Inventory *inventory;
	int health;
	int baseDamage;
};

#endif /* ACTOR_HH_ */
