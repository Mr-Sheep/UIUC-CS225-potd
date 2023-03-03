#include "TreeNode.h"

int getHeightBalance(TreeNode *root) {
  // your code here
  if (root == NULL) {
    return 0;
  }
  int leftHeight = getHeight(root->left_);
  int rightHeight = getHeight(root->right_);
  return leftHeight - rightHeight;
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
