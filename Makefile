CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		SpaceEscapeInC++.o Command/*.o Model/*.o 

LIBS =	

TARGET =	SpaceEscapeInC++ 


$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS) 

all:	$(TARGET)

Command/*.o:
	make -C Command
	
Model/*.o:
	make -C Model

clean:
	rm -f $(OBJS) $(TARGET) $(T_OBJS) $(T_TARGET)
	make -C Command clean
	make -C Model clean
	make -C Tests clean
