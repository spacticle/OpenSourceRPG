/*
 * Inventory.hh
 *
 *  Created on: May 14, 2013
 *      Author: zherr
 */

#ifndef INVENTORY_HH_
#define INVENTORY_HH_
#include <vector>
#include <string.h>
#include <algorithm>
#include <exception>
#include "Item.hh"

inline bool cmp_by_name(const Item& a, const Item& b) {
    return a.getName() < b.getName();
}

class OverCapacity : public std::exception{
public:
	virtual const char* what() const throw();
};

class ItemNotFound : public std::exception{
public:
	virtual const char* what() const throw();
};

class Inventory{
public:
	Inventory();
	virtual ~Inventory();
	Inventory(int capacity, int itemWeight = 0);
	void Inventory(const Inventory& another);

	virtual inline int getWeight(){return itemWeight;}
	virtual inline int getCapacity(){return capacity;}
	virtual inline std::vector<Item*> listInventory() const{ return inventory; };
	virtual void addItem(Item &i);
	virtual void removeItem(Item &i);
	virtual inline void clearInventory();
	virtual Inventory& operator=(const Inventory&);//TODO
private:
	std::vector<Item*> inventory;
	int itemWeight;
	int capacity;
};

#endif /* INVENTORY_HH_ */
