#include "TreeNode.h"
#include <algorithm>

int getHeight(TreeNode *node) {
  if (node == NULL) {
    return 0;
  }
  if (node->left_ == NULL && node->right_ == NULL) {
    return 1;
  }
  int left = getHeight(node->left_);
  int right = getHeight(node->right_);
  return std::max(right, left);
}

void rightRotate(TreeNode *root) {
  TreeNode *new_root = root->left_;
  root->left_ = new_root->right_;
  new_root->right_->parent_ = root;
  new_root->right_ = root;
  new_root->parent_ = NULL;
  root->parent_ = new_root;
}

void leftRotate(TreeNode *root) {
  TreeNode *new_root = root->right_;
  root->right_ = new_root->left_;
  new_root->left_->parent_ = root;
  new_root->left_ = root;
  new_root->parent_ = NULL;
  root->parent_ = new_root;
}

void deleteTree(TreeNode *root) {
  if (root == NULL)
    return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
