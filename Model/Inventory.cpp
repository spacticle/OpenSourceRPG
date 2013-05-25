/*
 * Inventory.cpp
 *
 *  Created on: May 14, 2013
 *      Author: zherr
 */

#include <vector>
#include <string.h>
#include <exception>
#include "Inventory.hh"
#include "Item.hh"

using namespace std;

const char* OverCapacity::what() const throw(){
	return "Item is too heavy to place into inventory!\n";
}

const char* ItemNotFound::what() const throw(){
	return "Item is not in inventory!\n";
}

//class OverCapacity : public std::exception{
//	virtual const char* what() const throw(){
//		return "Item is too heavy to place into inventory!\n";
//	}
//} OverCap;
//
//class ItemNotFound : public std::exception{
//	virtual const char* what() const throw(){
//		return "Item is not in inventory!\n";
//	}
//} ItNotFound;

Inventory::Inventory() {
	capacity = 500;
	itemWeight = 0;
	inventory = vector<Item*>();
}

Inventory::~Inventory() {
	//TODO delete inventory;
}

Inventory::Inventory(int cap, int w){
	capacity = cap;
	itemWeight = w;
	inventory = vector<Item*>();
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
