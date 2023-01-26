#pragma once
#include "Thing.h"
#include <iostream>
#include <string>
using namespace std;
using namespace potd;

Thing::Thing(int size) : props_ct_(0), props_max_(size) {
  values_ = new string[size];
  properties_ = new string[size];
}
Thing::Thing(const Thing &other) { Thing::_copy(other); }

Thing &Thing::operator=(const Thing &rhs) {
  if (this == &rhs)
    return *this;
  Thing::_destroy();
  Thing::_copy(rhs);
  return *this;
}

Thing::~Thing() { Thing::_destroy(); }

int Thing::set_property(std::string name, std::string value) {
  if (Thing::get_property(name).empty() && props_ct_ != props_max_) {
    // std::cout << "condition one" << endl;
    properties_[props_ct_] = name;
    values_[props_ct_] = value;
    props_ct_++;
    return (props_ct_ - 1);
  } else {
    for (auto i = 0; i < props_ct_; i++) {
      if (properties_[i] == name) {
        // std::cout << "condition two, i = " << i << endl;
        values_[i] = value;
        return i;
      }
    }
  }
  return -1;
}
std::string Thing::get_property(std::string str) {
  for (auto i = 0; i < props_ct_; i++) {
    if (properties_[i] == str)
      return values_[i];
  }
  return "";
}

void Thing::_copy(const Thing &rhs) {
  props_max_ = rhs.props_max_;
  props_ct_ = rhs.props_ct_;
  values_ = new string[props_max_];
  properties_ = new string[props_max_];
  for (auto i = 0; i < props_ct_; i++) {
    values_[i] = rhs.values_[i];
    properties_[i] = rhs.properties_[i];
  }
}
void Thing::_destroy() {
  delete[] properties_;
  delete[] values_;
}
