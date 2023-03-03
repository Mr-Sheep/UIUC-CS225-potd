#include "TreeNode.h"
#include <iostream>

TreeNode *findLastUnbalanced(TreeNode *root) {
  if (root == NULL) {
    return NULL;
  }
  getHeight(root);
  TreeNode *unbalancedNode = NULL;
  if (std::abs(root->balance_) > 1) {
    unbalancedNode = root;
  } else {
    TreeNode *leftUnbalancedNode = findLastUnbalanced(root->left_);
    TreeNode *rightUnbalancedNode = findLastUnbalanced(root->right_);
    if (leftUnbalancedNode != NULL &&
        (unbalancedNode == NULL || leftUnbalancedNode->balance_ != 0 ||
         getHeight(leftUnbalancedNode) > getHeight(unbalancedNode))) {
      unbalancedNode = leftUnbalancedNode;
    }
    if (rightUnbalancedNode != NULL &&
        (unbalancedNode == NULL || rightUnbalancedNode->balance_ != 0 ||
         getHeight(rightUnbalancedNode) > getHeight(unbalancedNode))) {
      unbalancedNode = rightUnbalancedNode;
    }
  }
  return unbalancedNode;
}

int getHeight(TreeNode *node) {
  if (node == NULL) {
    return 0;
  }
  if (node->left_ == NULL && node->right_ == NULL) {
    return 1;
  }
  int left = getHeight(node->left_);
  int right = getHeight(node->right_);
  node->balance_ = left - right;
  return std::max(right, left) + 1;
}

void deleteTree(TreeNode *root) {
  if (root == NULL)
    return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}
