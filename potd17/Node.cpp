#include "Node.h"
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
}

void sortList(Node **head) {
  if (*head == nullptr) {
    return;
  }
  Node *new_head;
  Node *curr_node = *head;
  bool sorted = true;
  while (curr_node->next_ != nullptr && sorted) {
    if (curr_node->data_ > curr_node->next_->data_) {
      sorted = false;
    }
    curr_node = curr_node->next_;
  }
  if (sorted) {
    return;
  }
  curr_node = *head;
  while (curr_node != nullptr) {
    Node *temp = curr_node;
    curr_node = curr_node->next_;
    temp->next_ = nullptr;
    insertSorted(&new_head, temp);
  }
  *head = new_head;
}

Node::Node() { numNodes++; }

Node::Node(Node &other) {
  this->data_ = other.data_;
  this->next_ = other.next_;
  numNodes++;
}

Node::~Node() { numNodes--; }

int Node::numNodes = 0;