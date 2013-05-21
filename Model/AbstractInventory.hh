/*
 * AbstractInventory.hh
 *
 *  Created on: May 19, 2013
 *      Author: zherr
 */

#ifndef ABSTRACTINVENTORY_HH_
#define ABSTRACTINVENTORY_HH_
#include <list>

class Item;

class AbstractInventory {
public:
	AbstractInventory(){};
	virtual ~AbstractInventory();

	virtual inline int getWeight() = 0;
	virtual inline int getCapacity() = 0;
	virtual inline std::list<Item> getinventory() const = 0;
	virtual void addItem(Item i) = 0;
	virtual void removeItem(Item i) = 0;
	virtual inline void clearInventory() = 0;

};

#endif /* ABSTRACTINVENTORY_HH_ */
