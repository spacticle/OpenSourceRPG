/*
 * Item.cpp
 *
 *  Created on: May 8, 2013
 *      Author: zherr
 */

#include "Item.hh"
#include <string.h>
#include <cstdlib>

using namespace std;

Item::Item() {
	name = "";
	description = "";
	weight = 0;
}

Item::Item(string name, string description, int weight){
	this->name = name;
	this->description = description;
	this->weight = weight;
}


Item::~Item() {
	// TODO Auto-generated destructor stub
}

Item::Item(const Item& it){
	name = it.name;
	weight = it.weight;
	description = it.description;
}

Item& Item::operator =(const Item& it){

	Item temp( it );
	std::swap(name, temp.name);
	std::swap(description, temp.description);
	std::swap(weight, temp.weight);

	return *this;
}

//bool Item::cmp_by_name(Item &it0, Item &it1){
//	return it0.getName() < it1.getName();
//}

//bool Item::operator ==(Item i){
//
//}
