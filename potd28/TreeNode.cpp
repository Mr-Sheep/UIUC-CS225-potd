#include "TreeNode.h"

bool isHeightBalanced(TreeNode *root) {
  if (root == NULL) {
    return true;
  }
  int leftHeight = getHeight(root->left_);
  int rightHeight = getHeight(root->right_);
  if (std::abs(leftHeight - rightHeight) > 1) {
    return false;
  }
  return isHeightBalanced(root->left_) && isHeightBalanced(root->right_);
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
