#include "TreeNode.h"
#include <iostream>

int getHeight(TreeNode *node) {
  if (node == NULL) {
    return 0;
  }
  int left = getHeight(node->left_);
  int right = getHeight(node->right_);
  return std::max(left, right) + 1;
}

TreeNode *find(TreeNode *node, int key) {
  if (node == nullptr) {
    return nullptr;
  } else if (key == node->val_) {
    return node;
  } else if (key < node->val_) {
    return find(node->left_, key);
  } else
    return find(node->right_, key);
}

TreeNode *deleteNode(TreeNode *root, int key) {
  if (root == NULL) {
    return root;
  }
  if (key < root->val_) {
    root->left_ = deleteNode(root->left_, key);
  } else if (key > root->val_) {
    root->right_ = deleteNode(root->right_, key);
  } else {
    // one child
    if (root->left_ == NULL) {
      TreeNode *temp = root->right_;
      delete root;
      return temp;
    } else if (root->right_ == NULL) {
      TreeNode *temp = root->left_;
      delete root;
      return temp;
    }
    // two child
    else {
      TreeNode *temp = root->right_;
      while (temp->left_) {
        temp = temp->left_;
      }
      root->val_ = temp->val_;
      root->right_ = deleteNode(root->right_, temp->val_);
    }
  }
  return root;
}

void inorderPrint(TreeNode *node) {
  if (!node)
    return;
  inorderPrint(node->left_);
  std::cout << node->val_ << " ";
  inorderPrint(node->right_);
}

void deleteTree(TreeNode *root) {
  if (root == NULL)
    return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}