/*
 * Inventory.cpp
 *
 *  Created on: May 14, 2013
 *      Author: zherr
 */

#include <vector>
#include <string.h>
#include <exception>
#include <algorithm>
#include "Inventory.hh"
#include "Item.hh"
#include <iostream>

using namespace std;

const char* OverCapacity::what() const throw(){
	return "Item is too heavy to place into inventory!\n";
}

const char* ItemNotFound::what() const throw(){
	return "Item is not in inventory!\n";
}

Inventory::Inventory() {
	capacity = 500;
	itemWeight = 0;
	inventory = vector<Item*>();
}

Inventory::~Inventory() {
	//TODO delete inventory;

	for(vector<Item*>::iterator it = inventory.begin(); it != inventory.end(); ++it){
		cout << "Inventory size: " << inventory.size() << endl;// TODO
		//delete inventory[i];
		delete *it;
		it = inventory.erase(it);
		cout << "Deleting items...\n";
	}
	inventory.clear();
}

Inventory::Inventory(int cap, int w){
	capacity = cap;
	itemWeight = w;
	inventory = vector<Item*>();
}

//TODO Copy Constructor
Inventory::Inventory(const Inventory &another):
	inventory(another.inventory.size()){
	for(int i = 0; i < another.inventory.size(); ++i){
		inventory[i] = new Item(*another.inventory[i]);
	}
	capacity = another.capacity;
	itemWeight = another.itemWeight;
}

//TODO Assignment operator
Inventory& Inventory::operator=(const Inventory& inv){

	Inventory tmp( inv );

	std::swap(inventory, tmp.inventory);
	std::swap(capacity, tmp.capacity);
	std::swap(itemWeight, tmp.itemWeight);

	return *this;
}

void Inventory::addItem(Item &i){
	if(i.getWeight() + itemWeight > capacity){
		throw new OverCapacity();
	}else{
		inventory.push_back(&i);
		itemWeight += i.getWeight();
	}
}

void Inventory::removeItem(Item &i){
	int s0 = inventory.size();
	for(vector<Item*>::iterator it = inventory.begin(); it != inventory.end(); ++it){
			if(*it == &i){
				//delete *it;
				inventory.erase(it);//TODO
			}
		}
	//inventory.remove(i);
	if(inventory.size()<s0){
		itemWeight -= i.getWeight();
	}else{
		throw new ItemNotFound();
	}
}

void Inventory::clearInventory(){
	for(int i = 0; i < inventory.size(); ++i){
		//delete inventory[i];
	}
	inventory.clear();
	itemWeight = 0;
}
