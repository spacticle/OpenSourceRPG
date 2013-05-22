/*
 * Actor.cpp
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#include "Actor.hh"
#include "Location.hh"
#include <string>

using namespace std;

Actor::Actor() {
	name = "Default";
	health = 100;
	baseDamage = 100;
}

Actor::Actor(string name, int health, int damage){
	this->name = name;
	this->health = health;
	baseDamage = damage;
}

Actor::~Actor() {
	// TODO Auto-generated destructor stub
}

void Actor::setCurrentLocation(Location &l){
	this->currentLocation = l;
}

void Actor::alterHealth(int adjust){
	this->health += adjust;
}
