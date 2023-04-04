#pragma once

#include "tree.h"
template <class T>
Tree<T>::Iterator::Iterator(Tree::Node *root) : curr_(root) {
  // Initialize the stack with the right spine of the tree
  while (curr_ != NULL) {
    s_.push(curr_);
    curr_ = curr_->right_;
  }

  // If the root data_ is NULL, move to the next valid node
  if (!s_.empty()) {
    curr_ = s_.top();
    s_.pop();
  }
  while (curr_ != NULL && curr_->data_ == NULL) {
    this->operator++();
  }
}

template <class T>
typename Tree<T>::Iterator &Tree<T>::Iterator::operator++() {
  // Move to the left child of the current node
  curr_ = curr_->left_;
  // Traverse the right spine of the left subtree
  while (curr_ != NULL) {
    s_.push(curr_);
    curr_ = curr_->right_;
  }

  if (!s_.empty()) {
    curr_ = s_.top();
    s_.pop();
  } else {
    curr_ = NULL;
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