/*
 * Item.hh
 *
 *  Created on: May 8, 2013
 *      Author: zherr
 */

#ifndef ITEM_HH_
#define ITEM_HH_
#include <string.h>
#include <string>

class Item{
public:
	Item();
	Item(std::string name, std::string description, int weight);
	virtual ~Item();
	Item(const Item&);

	virtual inline int getWeight(){return weight;}
	virtual inline std::string getName() const{return name;} //TODO note here where "const" is placed
	virtual inline std::string getDescr() const{return description;}
	virtual Item& operator=(const Item&);
	virtual inline bool operator==(Item i){
		if(strcmp(i.getName().c_str(), this->getName().c_str())==0){
				return true;
			}else{ return false; }
	}

	//virtual inline bool cmp_by_name(Item &it0, Item &it1);
private:
	std::string name;
	std::string description;
	int weight;

};

#endif /* ITEM_HH_ */
