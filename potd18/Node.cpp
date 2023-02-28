#include "Node.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/** Create a new node and add it to the list, while keeping the list sorted.
 */
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

  Node *curr_node = first;
  while (curr_node->next_ != NULL) {
    if (insert->data_ < curr_node->next_->data_) {
      insert->next_ = curr_node->next_;
      curr_node->next_ = insert;
      return first;
    }
    curr_node = curr_node->next_;
  }
  insert->next_ = curr_node->next_;
  curr_node->next_ = insert;
  return first;
}

/** Creates a new list (containing new nodes, allocated on the heap)
        that contains the set union of the values in both lists.
*/
Node *listUnion(Node *first, Node *second) {
  Node *out = NULL;
  std::vector<int> values;

  while (first != nullptr) {
    if (!(find(values.begin(), values.end(), first->data_) != values.end())) {
      // cout << first->data_ << endl;
      out = insertSorted(out, first->data_);
      values.push_back(first->data_);
    }
    first = first->next_;
  }

  while (second != nullptr) {
    if (!(find(values.begin(), values.end(), second->data_) != values.end())) {
      // cout << second->data_ << endl;
      out = insertSorted(out, second->data_);
      values.push_back(second->data_);
    }
    second = second->next_;
  }

  return out;
}

Node::Node() { numNodes++; }

Node::Node(const Node &other) {
  this->data_ = other.data_;
  this->next_ = other.next_;
  numNodes++;
}

Node::~Node() { numNodes--; }

int Node::numNodes = 0;
