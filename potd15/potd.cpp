#include "potd.h"
#include <iostream>

using namespace std;

string stringList(Node *head) {
  if (head == nullptr) {
    return "Empty list";
  }
  string output = "";
  int counter = 0;

  while (head->next_ != nullptr) {
    output +=
        "Node " + to_string(counter) + ": " + to_string(head->data_) + " -> ";
    head = head->next_;
    counter++;
  }

  output += "Node " + to_string(counter) + ": " + to_string(head->data_);

  return output;
}
