#include <iostream>
#include <string>

#include "Square.h"

Square::Square() {
  name = "mysquare";
  lengthptr = new double;
  *lengthptr = 2.0;
}

void Square::setName(std::string newName) { name = newName; }

void Square::setLength(double newVal) { *lengthptr = newVal; }

std::string Square::getName() const { return name; }

double Square::getLength() const { return *lengthptr; }

Square::Square(const Square &other) {
  name = other.getName();
  lengthptr = new double;
  *lengthptr = other.getLength();
}

Square::~Square() { delete lengthptr; }

Square &Square::operator=(const Square &other) {
  if (this == &other)
    return *this;
  delete lengthptr;
  name = other.getName();
  lengthptr = new double;
  *lengthptr = other.getLength();
  return *this;
}
Square Square::operator+(const Square &other) {
  Square *dummy = new Square();
  dummy->name = name + other.getName();
  *dummy->lengthptr = this->getLength() + other.getLength();
  return *dummy;
}