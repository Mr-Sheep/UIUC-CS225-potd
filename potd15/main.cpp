#include "potd.h"
#include <iostream>
using namespace std;

int main() {
  // Test 1: An empty list
  Node *head = {.data_ = 10};
  // Node *second = {};
  // Node *third = {};
  head->data_ = 10;
  head->next_ = nullptr;
  // second->data_ = 20;
  // second->next_ = third;
  // third->data_ = 30;
  // third->next_ = nullptr;

  cout << stringList(head) << endl;

  // Test 2: A list with exactly one node

  // Test 3: A list with more than one node

  return 0;
}
