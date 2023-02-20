#include "Node.h"
#include <algorithm>
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
Node *listIntersection(Node *first, Node *second) {
  Node *out = NULL;
  std::vector<int> values;

  while (first != nullptr) {
    if (!(std::find(values.begin(), values.end(), first->data_) !=
          values.end())) {
      values.push_back(first->data_);
    }
    first = first->next_;
  }

  while (second != nullptr) {
    if (std::find(values.begin(), values.end(), second->data_) !=
        values.end()) {
      out = insertSorted(out, second->data_);
      //   values.push_back(second->data_);
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
