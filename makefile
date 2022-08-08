# Debugging Assignment - CS 210/496 Spring 2022
# @author Manan Katwala <mkatwala@sdsu.edu>
# @date March 3, 2022

CXX=g++
CXXFLAGS=-g3 -std=c++11
CXXOUT=-o dict
CXXSEP=-c

main: main.cpp dictnode.o 
	$(CXX) $(CXXFLAGS) $(CXXOUT) $^

dictnode.o: dictnode.cpp 
	$(CXX) $(CXXFLAGS) $(CCXXSEP) $^

clean:
	rm -f dict a.out *.o *.gch

cleano:
	rm -f *.o *.gch
