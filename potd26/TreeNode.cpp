#include "TreeNode.h"

#include <cstddef>
#include <iostream>
using namespace std;

TreeNode::TreeNode() : left_(NULL), right_(NULL) {}

int TreeNode::getHeight() {
  if (this->left_ == nullptr && this->right_ == nullptr) {
    return 0;
  }
  int left = 0, right = 0;
  if (this->left_ != nullptr)
    left = this->left_->getHeight();
  if (this->right_ != nullptr)
    right = this->right_->getHeight();
  return std::max(right, left) + 1;
}
