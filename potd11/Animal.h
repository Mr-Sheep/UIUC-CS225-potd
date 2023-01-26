// Animal.h
#include <string>

using namespace std;

class Animal {
private:
  string type_;
  string food_;

public:
  Animal() {
    setType("cat");
    setFood("fish");
  }
  Animal(string type, string food) : type_(type), food_(food) {}
  string getType() const { return type_; }
  string getFood() const { return food_; }
  void setType(string type) { type_ = type; }
  void setFood(string food) { food_ = food; }
  string print() { return "I am a " + getType() + "."; }
};
