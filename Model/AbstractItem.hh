/*
 * AbstractItem.hh
 *
 *  Created on: May 20, 2013
 *      Author: zherr
 */

#ifndef ABSTRACTITEM_HH_
#define ABSTRACTITEM_HH_
#include <string.h>
#include <string>
//#include "Item.hh"

class Item;

class AbstractItem {
public:
	AbstractItem(){};
	virtual ~AbstractItem();

	virtual inline int getWeight() = 0;
	virtual inline std::string getName() const = 0;//TODO note here where "const" is placed
	virtual inline std::string getDescr() const = 0;
	virtual inline bool operator==(Item i) = 0;
};

#endif /* ABSTRACTITEM_HH_ */
