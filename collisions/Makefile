CXX = g++
#CXXFLAGS = -std=c++0x -Wall

OBJECTS = main.o source.o
TARGET = main
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system 

main:$(OBJECTS)
		$(CXX) $(OBJECTS) $(LFLAGS) -o $(TARGET) 


main.o:main.cpp
		$(CXX) -c main.cpp 

source.o:source.cpp 
		$(CXX) -c source.cpp

clean:
	rm *.o $(TARGET)