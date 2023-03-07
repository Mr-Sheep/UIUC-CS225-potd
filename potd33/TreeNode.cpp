#include "TreeNode.h"

void rotateRight(TreeNode *node) {
  TreeNode *new_root = node->left_;
  node->left_ = new_root->right_;
  new_root->right_ = node;
  node = new_root;
}

void rotateLeft(TreeNode *node) {
  TreeNode *new_root = node->right_;
  node->right_ = new_root->left_;
  new_root->left_ = node;
  node = new_root;
}

TreeNode::RotationType balanceTree(TreeNode *&subroot) {
  // Your code here
  int balance = getHeight(subroot->right_) - getHeight(subroot->left_);
  if (balance > 1) {
    int r_balance =
        getHeight(subroot->right_->right_) - getHeight(subroot->right_->left_);
    if (r_balance == 1) {
      rotateLeft(subroot);
      return TreeNode::left;
    } else {
      rotateRight(subroot->right_);
      rotateLeft(subroot);
      return TreeNode::rightLeft;
    }
  }
  if (balance < -1) {
    int l_balance =
        getHeight(subroot->left_->right_) - getHeight(subroot->left_->left_);
    if (l_balance == -1) {
      rotateRight(subroot);
      return TreeNode::right;
    } else {
      rotateLeft(subroot->left_);
      rotateRight(subroot);
      return TreeNode::leftRight;
    }
  }
  return TreeNode::right;
}
