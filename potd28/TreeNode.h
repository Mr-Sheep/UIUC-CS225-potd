#pragma once

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

bool isHeightBalanced(TreeNode *root);
int getHeight(TreeNode *node);
void deleteTree(TreeNode *root);
