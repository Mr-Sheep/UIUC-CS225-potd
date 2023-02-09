#include <iostream>
#include <string>
using namespace std;

#include "food.h"
#include "potd.h"

int main() {
  Food apples, oranges;
  apples.setName("apples");
  apples.setQuantity(3);
  oranges.setName("oranges");
  oranges.setQuantity(5);
  Food less = fewer(apples, oranges);
  cout << "We have fewer " << less.getName() << "." << endl;
  return 0;
}
