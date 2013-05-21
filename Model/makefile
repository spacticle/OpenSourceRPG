CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Actor.o Item.o Location.o Game.o Inventory.o

LIBS =	

all:	$(OBJS)

Actor.o: AbstractActor.o
	$(CXX) -c Actor.cpp -o Actor.o
	
Location.o: AbstractLocation.o
	$(CXX) -c Location.cpp -o Location.o
	
Game.o:
	$(CXX) -c Game.cpp -o Game.o

Item.o: AbstractItem.o
	$(CXX) -c Item.cpp -o Item.o
	
Inventory.o: AbstractInventory.o
	$(CXX) -c Inventory.cpp -o Inventory.o
	
AbstractActor.o:
	$(CXX) -c AbstractActor.cpp -o AbstractActor.o
	
AbstractLocation.o:
	$(CXX) -c AbstractLocation.cpp -o Abstractlocation.o

AbstractItem.o:
	$(CXX) -c AbstractItem.cpp -o AbstractItem.o
	
AbstractInventory.o:
	$(CXX) -c AbstractInventory.cpp -o AbstractInventory.o

clean:
	rm -f $(OBJS) $(TARGET) *.o
