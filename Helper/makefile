CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		CommandMapper.o FileUtil.o UI.o

LIBS =	

all:	$(OBJS)

CommandMapper.o:
	$(CXX) -c CommandMapper.cpp -o CommandMapper.o
	
FileUtil.o:
	$(CXX) -c FileUtil.cpp -o FileUtil.o
	
UI.o:
	$(CXX) -c UI.cpp -o UI.o

clean:
	rm -f $(OBJS) $(TARGET) 
