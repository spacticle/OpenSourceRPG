CXXFLAGS = -lcppunit

CPPUNIT = /usr/lib/

OBJS = ../Command/*.o ../Helper/*.o ../Model/*.o MainTests.o \
TestCommand.o TestItem.o TestInventory.o TestActor.o TestLocation.o \
TestLevel.o TestCommandMapper.o TestFileUtil.o TestUI.o

LIBS =	/usr/lib/libcppunit.a

TARGET = TEST


$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS) 

all:	$(TARGET)

../Command/*.o:
	make -C ../Command
	
../Model/*.o:
	make -C ../Model
	
../Helper/*.o:
	make -C ../Helper
	
TestActor.o:
	$(CXX) -c TestActor.cpp $(CXXFLAGS) -o TestActor.o
	
TestCommand.o:
	$(CXX) -c TestCommand.cpp $(CXXFLAGS) -o TestCommand.o
	
TestItem.o:
	$(CXX) -c TestItem.cpp $(CXXFLAGS) -o TestItem.o
	
TestInventory.o:
	$(CXX) -c TestInventory.cpp $(CXXFLAGS) -o TestInventory.o
	
TestLocation.o:
	$(CXX) -c TestLocation.cpp $(CXXFLAGS) -o TestLocation.o
	
TestLevel.o:
	$(CXX) -c TestLevel.cpp $(CXXFLAGS) -o TestLevel.o
	
TestCommandMapper.o:
	$(CXX) -c TestCommandMapper.cpp $(CXXFLAGS) -o TestCommandMapper.o
	
TestFileUtil.o:
	$(CXX) -c TestFileUtil.cpp $(CXXFLAGS) -o TestFileUtil.o
	
TestUI.o:
	$(CXX) -c TestUI.cpp $(CXXFLAGS) -o TestUI.o
	
MainTests.o:
	$(CXX) -c MainTests.cpp $(CXXFLAGS) -o MainTests.o

clean:
	rm -f $(OBJS) $(TARGET) $(T_OBJS) $(T_TARGET)
	make -C ../Command clean
	make -C ../Model clean
	make -C ../Helper clean
