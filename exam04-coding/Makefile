EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): tree.hpp tree.h main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o $(EXENAME)

.PHONY: clean
clean:
	rm -f *.o $(EXENAME)