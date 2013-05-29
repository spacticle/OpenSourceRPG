CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Actor.o Item.o Location.o Game.o Inventory.o Level.o

LIBS =	

all:	$(OBJS)

Actor.o:
	$(CXX) -c Actor.cpp -o Actor.o
	
Location.o:
	$(CXX) -c Location.cpp -o Location.o
	
Game.o:
	$(CXX) -c Game.cpp -o Game.o

Item.o:
	$(CXX) -c Item.cpp -o Item.o
	
Inventory.o:
	$(CXX) -c Inventory.cpp -o Inventory.o
	
Level.o:
	$(CXX) -c Level.cpp -o Level.o

clean:
	rm -f $(OBJS) $(TARGET) *.o
