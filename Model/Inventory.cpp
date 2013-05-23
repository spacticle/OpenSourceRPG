/*
 * Inventory.cpp
 *
 *  Created on: May 14, 2013
 *      Author: zherr
 */

#include "Inventory.hh"
#include "Item.hh"
#include <list>
#include <string.h>
#include <exception>

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
	//inventory = list<Item*>();
}

Inventory::~Inventory() {
	// TODO Auto-generated destructor stub
}

Inventory::Inventory(int cap, int w){
	capacity = cap;
	itemWeight = w;
	//inventory = list<Item*>();
}

void Inventory::addItem(Item i){
	if(i.getWeight() + itemWeight > capacity){
		throw new OverCapacity();
	}else{
		inventory.push_back(i);
		itemWeight += i.getWeight();
	}
}

void Inventory::removeItem(Item i){
	int s0 = inventory.size();
	inventory.remove(i);
	if(inventory.size()<s0){
		itemWeight -= i.getWeight();
	}else{
		throw new ItemNotFound();
	}
}
