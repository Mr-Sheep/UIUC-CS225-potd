#pragma once

#include "tree.h"
template <class T>
Tree<T>::Iterator::Iterator(Tree::Node *root) : curr_(root) {
  // Initialize the stack with the right spine of the tree
  Node *cur = root;
  while (cur != NULL) {
    s_.push(cur);
    cur = cur->left_;
  }
  if (!s_.empty()) {
    curr_ = s_.top();
    s_.pop();
    if (curr_->data_ == NULL) {
      ++*this;
    }
  }
}

template <class T>
typename Tree<T>::Iterator &Tree<T>::Iterator::operator++() {
  if (s_.empty()) {
    curr_ = NULL;
    return *this;
  } else {
    curr_ = s_.top();
    s_.pop();
    Node *cur = curr_->right_;
    while (cur != NULL) {
      s_.push(cur);
      cur = cur->left_;
    }

    if (curr_->data_ == NULL) {
      ++*this;
    }
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