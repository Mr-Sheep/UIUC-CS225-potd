#include "Node.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

Node *insertSorted(Node *first, int data) {
  Node *insert = new Node();
  insert->data_ = data;
  insert->next_ = nullptr;

  if (first == nullptr) {
    first = insert;
    return insert;
  }

  if (insert->data_ < (first)->data_) {
    insert->next_ = first;
    first = insert;
    return insert;
  }
  if (insert->data_ == (first)->data_) {
    return first;
  }

  Node *curr_node = first;
  while (curr_node->next_ != NULL) {
    if (insert->data_ < curr_node->next_->data_) {
      insert->next_ = curr_node->next_;
      curr_node->next_ = insert;
      return first;
    }
    if (insert->data_ == curr_node->next_->data_) {
      return first;
    }
    curr_node = curr_node->next_;
  }
  insert->next_ = curr_node->next_;
  curr_node->next_ = insert;
  return first;
}
Node *listSymmetricDifference(Node *first, Node *second) {
  Node *out = NULL;
  std::vector<int> values1;
  std::vector<int> values2;
  std::vector<int> dummy;

  Node *temp_first = first;
  Node *temp_second = second;
  // iterate and push to vector
  while (temp_first != nullptr) {
    values1.push_back(temp_first->data_);
    temp_first = temp_first->next_;
  }
  while (temp_second != nullptr) {
    values2.push_back(temp_second->data_);
    temp_second = temp_second->next_;
  }

  while (first != nullptr) {
    if (std::find(values2.begin(), values2.end(), first->data_) ==
        values2.end()) {
      if (std::find(dummy.begin(), dummy.end(), first->data_) == dummy.end()) {
        out = insertSorted(out, first->data_);
        dummy.push_back(first->data_);
      }
    }
    first = first->next_;
  }

  while (second != nullptr) {
    if (std::find(values1.begin(), values1.end(), second->data_) ==
        values1.end()) {
      if (std::find(dummy.begin(), dummy.end(), second->data_) == dummy.end()) {
        out = insertSorted(out, second->data_);
        dummy.push_back(second->data_);
      }
    }
    second = second->next_;
  }

  return out;
}

Node::Node() { numNodes++; }

Node::Node(Node &other) {
  this->data_ = other.data_;
  this->next_ = other.next_;
  numNodes++;
}

Node::~Node() { numNodes--; }

int Node::numNodes = 0;
