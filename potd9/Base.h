#pragma once

#include <iostream>
#include <string>

using namespace std;

class Base {
public:
  string foo() { return "Sam I Am"; }
  virtual string bar() { return "Green Eggs"; }
  ~Base();
};