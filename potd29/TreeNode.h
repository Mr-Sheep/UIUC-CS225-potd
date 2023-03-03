
#ifndef TreeNode_H
#define TreeNode_H

#include <cstddef>
#include <iostream>
// Definition for a binary tree node.
struct TreeNode {
  int val_;
  TreeNode *left_;
  TreeNode *right_;
  TreeNode(int x) {
    left_ = NULL;
    right_ = NULL;
    val_ = x;
  }
};

int getHeight(TreeNode *node);

int getHeightBalance(TreeNode *root);

void deleteTree(TreeNode *root);

#endif
