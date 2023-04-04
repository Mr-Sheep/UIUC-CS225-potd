#pragma once

#include "tree.h"
template <class T>
Tree<T>::Iterator::Iterator(Tree::Node *root) : curr_(root) {
  // Initialize the stack with the right spine of the tree
  // if (curr_ != NULL) {
  //   q_.push(curr_);
  // }

  while (curr_ != NULL && curr_->data_ == NULL) {
    this->operator++();
  }
}

template <class T>
typename Tree<T>::Iterator &Tree<T>::Iterator::operator++() {
  Tree::Node *prev = curr_;
  curr_ = NULL;

  // Enqueue the left child if available
  if (prev->left_ != NULL) {
    q_.push(prev->left_);
  }
  // Enqueue the right child if available
  if (prev->right_ != NULL) {
    q_.push(prev->right_);
  }

  // Dequeue the next node
  if (!q_.empty()) {
    curr_ = q_.front();
    q_.pop();
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