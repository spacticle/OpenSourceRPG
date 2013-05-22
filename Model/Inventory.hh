/*
 * Inventory.hh
 *
 *  Created on: May 14, 2013
 *      Author: zherr
 */

#ifndef INVENTORY_HH_
#define INVENTORY_HH_
#include "Item.hh"
#include <list>
#include <string.h>
#include <algorithm>
#include <exception>

class OverCapacity : public std::exception{
	virtual const char* what() const throw(){
		return "Item is too heavy to place into inventory!\n";
	}
} OverCap;

class ItemNotFound : public std::exception{
	virtual const char* what() const throw(){
		return "Item is not in inventory!\n";
	}
} ItNoFound;

inline bool cmp_by_name(const Item& a, const Item& b) {
    return a.getName() < b.getName();
}

class Inventory{
public:
	Inventory();
	virtual ~Inventory();
	Inventory(int capacity, int itemWeight = 0);

	virtual inline int getWeight(){return itemWeight;}
	virtual inline int getCapacity(){return capacity;}
	virtual inline std::list<Item> getinventory() const{ return inventory; };
	virtual void addItem(Item i);
	virtual void removeItem(Item i);
	virtual inline void clearInventory(){inventory.clear();}
private:
	std::list<Item> inventory;
	int itemWeight;
	int capacity;
};

#endif /* INVENTORY_HH_ */
