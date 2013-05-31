CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		SpaceEscapeInC++.o Command/*.o Model/*.o Helper/*.o

LIBS =	

TARGET =	SpaceEscapeInC++ 


$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS) 

all:	$(TARGET)

Command/*.o:
	make -C Command
	
Model/*.o:
	make -C Model
	
Helper/*.o:
	make -C Helper

clean:
	rm -f $(OBJS) $(TARGET) $(T_OBJS) $(T_TARGET)
	make -C Command clean
	make -C Model clean
	make -C Helper clean
	make -C Tests clean
