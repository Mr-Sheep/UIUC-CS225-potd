#include "Thing.h"
#include <iostream>

using namespace std;

int main() {
  potd::Thing *t1 = new potd::Thing(5);
  // potd::Thing *t2 = new potd::Thing(5);

  cout << t1->set_property("name", "Kermit") << endl;
  cout << t1->set_property("color", "Green") << endl;

  std::cout << t1->get_property("name") << " is " << t1->get_property("color")
            << std::endl;

  t1->set_property("name", "Pepe");
  t1->set_property("stupid", "benben");
  std::cout << t1->get_property("name") << " is " << t1->get_property("color")
            << " " << t1->get_property("stupid") << std::endl;
  // *t2 = *t1;
  // t1->set_property("name", "Grover");
  // t1->set_property("color", "Blue");

  // std::cout << t2->get_property("name") << " is " <<
  // t2->get_property("color")
  //           << std::endl;
  // std::cout << t1->get_property("name") << " is " <<
  // t1->get_property("color")
  //           << std::endl;

  // delete t1;
  // delete t2;
}
