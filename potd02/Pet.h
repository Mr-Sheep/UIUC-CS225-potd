#pragma once

#include <string>

using namespace std;

class Pet {
 public:
  // Declare your constructors here!
  Pet() : name{"Rover"}, birth_year{2018}, type{"dog"}, owner_name{"Wade"} {
  }
  Pet(string name, int b, string c, string d) : name{name}, birth_year{b}, type{c}, owner_name{d} {}
  // Other member functions
  void setName(string newName);
  void setBY(int newBY);
  void setType(string newType);
  void setOwnerName(string newName);
  string getName();
  int getBY();
  string getType();
  string getOwnerName();

 private:
  string name;
  int birth_year;
  string type;
  string owner_name;
};

