/*
 * Actor.cpp
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#include "Actor.hh"
#include "Inventory.hh"
#include "Location.hh"
#include <string>

using namespace std;

Actor::Actor() {
	name = "Default";
	health = 100;
	baseDamage = 100;
	currentLocation = new Location();
	inventory = new Inventory();
}

Actor::Actor(string name, int health, int damage){
	this->name = name;
	this->health = health;
	baseDamage = damage;
	currentLocation = new Location();
	inventory = new Inventory();
}

Actor::~Actor() {
	//TODO delete currentLocation;
	//TODO delete inventory;
}

void Actor::setCurrentLocation(Location &l){
	*currentLocation = l;
}

void Actor::alterHealth(int adjust){
	health += adjust;
}
