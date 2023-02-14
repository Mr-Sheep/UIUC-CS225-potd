#include "potd.h"
#include <iostream>

using namespace std;

void insertSorted(Node **head, Node *insert) {

  if (*head == nullptr) {
    *head = insert;
    return;
  }

  if (insert->data_ < (*head)->data_) {
    insert->next_ = *head;
    *head = insert;
    return;
  }

  Node *curr_node = *head;
  while (curr_node->next_ != NULL) {
    if (insert->data_ < curr_node->next_->data_) {
      insert->next_ = curr_node->next_;
      curr_node->next_ = insert;
      return;
    }
    curr_node = curr_node->next_;
  }
  insert->next_ = curr_node->next_;
  curr_node->next_ = insert;
  // your code here!
}
