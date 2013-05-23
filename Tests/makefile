CXXFLAGS = -lcppunit

CPPUNIT = /usr/lib/

OBJS = ../Command/*.o ../Model/*.o MainTests.o TestCommand.o TestItem.o TestInventory.o TestActor.o

LIBS =	/usr/lib/libcppunit.a

TARGET = TEST


$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS) 

all:	$(TARGET)

../Command/*.o:
	make -C ../Command
	
../Model/*.o:
	make -C ../Model
	
TestActor.o:
	$(CXX) -c TestActor.cpp $(CXXFLAGS) -o TestActor.o
	
TestCommand.o:
	$(CXX) -c TestCommand.cpp $(CXXFLAGS) -o TestCommand.o
	
TestItem.o:
	$(CXX) -c TestItem.cpp $(CXXFLAGS) -o TestItem.o
	
TestInventory.o:
	$(CXX) -c TestInventory.cpp $(CXXFLAGS) -o TestInventory.o
	
MainTests.o:
	$(CXX) -c MainTests.cpp $(CXXFLAGS) -o MainTests.o

clean:
	rm -f $(OBJS) $(TARGET) $(T_OBJS) $(T_TARGET)
	make -C ../Command clean
	make -C ../Model clean
