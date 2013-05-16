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

//bool Item::cmp_by_name(Item &it0, Item &it1){
//	return it0.getName() < it1.getName();
//}

//bool Item::operator ==(Item i){
//
//}
