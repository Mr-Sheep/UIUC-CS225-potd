// Pet.h
#pragma once

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Pet : public Animal {
private:
  string name_;
  string owner_name_;
  string food_;
  string type_;

public:
  Pet() : name_("Fluffy"), owner_name_("Cinda"), food_("fish"), type_("cat") {}
  Pet(string a, string b, string c, string d) {
    type_ = a;
    food_ = b;
    name_ = c;
    owner_name_ = d;
  }
  void setName(std::string nu_name) { name_ = nu_name; }
  std::string getName() { return name_; }

  void setOwnerName(std::string n) { owner_name_ = n; }
  std::string getOwnerName() { return owner_name_; }

  string print() { return "My name is " + getName(); }
};
