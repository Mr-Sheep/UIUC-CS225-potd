EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++0x -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp spring.cpp
	$(CXX) $(CXXFLAGS) main.cpp spring.cpp -o $(EXENAME)

.PHONY: clean
clean:
	rm -f $(EXENAME)
