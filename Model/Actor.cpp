/*
 * Actor.cpp
 *
 *  Created on: May 21, 2013
 *      Author: zherr
 */

#include "Actor.hh"
#include "Inventory.hh"
#include "Location.hh"
#include <iostream>
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
	delete currentLocation;
	delete inventory;
}

//TODO Copy constructor
Actor::Actor(const Actor &another){
	currentLocation = new Location(*another.currentLocation);
	inventory = new Inventory(*another.inventory);

	name = another.name;
	health = another.health;
	baseDamage = another.baseDamage;
}

Actor& Actor::operator =(const Actor &act){

	Actor tmp( act );
	std::swap(name, tmp.name);
	std::swap(health, tmp.health);
	std::swap(baseDamage, tmp.baseDamage);
	std::swap(currentLocation, tmp.currentLocation);
	std::swap(inventory, tmp.inventory);

	return *this;
}

void Actor::setCurrentLocation(Location &l){
	*currentLocation = l;
}

void Actor::alterHealth(int adjust){
	health += adjust;
}
