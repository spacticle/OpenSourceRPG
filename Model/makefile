CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Item.o  Inventory.o

LIBS =	

all:	$(OBJS)

Item.o: AbstractItem.o
	$(CXX) -c Item.cpp -o Item.o
	
Inventory.o: AbstractInventory.o
	$(CXX) -c Inventory.cpp -o Inventory.o
	
AbstractItem.o:
	$(CXX) -c AbstractItem.cpp -o AbstractItem.o
	
AbstractInventory.o:
	$(CXX) -c AbstractInventory.cpp -o AbstractInventory.o

clean:
	rm -f $(OBJS) $(TARGET)
