#pragma once

#include "tree.h"
template <class T>
Tree<T>::Iterator::Iterator(Tree::Node *root) : curr_(root) {
  // Initialize the stack with the right spine of the tree
  if (curr_ != NULL) {
    s_.push(curr_);
  }

  while (curr_ != NULL && curr_->data_ == NULL) {
    this->operator++();
  }
}

template <class T>
typename Tree<T>::Iterator &Tree<T>::Iterator::operator++() {
  // Move to the left child of the current node
  if (s_.empty()) {
    curr_ = NULL;
    return *this;
  }

  Tree::Node *prev = curr_;
  curr_ = NULL;

  // Move to the left child if available
  if (prev->left_ != NULL) {
    curr_ = prev->left_;
    s_.push(curr_);
  }
  // Move to the right child if the left child is not available
  else if (prev->right_ != NULL) {
    curr_ = prev->right_;
    s_.push(curr_);
  }
  // Move up the tree if no left or right child is available
  else {
    // Move up the tree until we find an ancestor with an unvisited right child
    while (!s_.empty()) {
      prev = s_.top();
      s_.pop();

      if (prev->right_ != NULL) {
        curr_ = prev->right_;
        s_.push(curr_);
        break;
      }
    }
  }

  // If the current node has NULL data_, move to the next valid node
  while (curr_ != NULL && curr_->data_ == NULL) {
    this->operator++();
  }

  return *this;
}

template <class T>
T Tree<T>::Iterator::operator*() const {
  if (curr_ == NULL) {
    return T();  // Default value for NULL pointer
  }
  return curr_->data_;
}

/*******************
 ** PROVIDED CODE **
 *******************/
template <class T>
bool Tree<T>::Iterator::operator!=(const Tree<T>::Iterator &other) {
  return !(curr_ == other.curr_);
}

template <class T>
typename Tree<T>::Iterator Tree<T>::begin() {
  return Iterator(root_);
}

template <class T>
typename Tree<T>::Iterator Tree<T>::end() {
  return Iterator(NULL);
}