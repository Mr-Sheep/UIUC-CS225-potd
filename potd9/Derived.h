#pragma once
#include "Base.h"

using namespace std;

class Derived : public Base {
public:
  string foo() { return "I will not eat them."; }
  string bar() { return "And Ham"; }
  ~Derived();
};