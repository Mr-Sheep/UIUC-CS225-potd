#include "BTreeNode.h"
#include <iostream>
#include <vector>
std::vector<int> traverse(BTreeNode *root) {
  // your code here
  std::vector<int> v;

  if (root == nullptr)
    return v;

  for (size_t i = 0; i < root->elements_.size(); i++) {
    if (!root->is_leaf_ && i == 0) {
      // std::cout << "called one" << std::endl;
      std::vector<int> left_subtree = traverse(root->children_[i]);
      v.insert(v.end(), left_subtree.begin(), left_subtree.end());
    }

    // std::cout << root->elements_[i] << std::endl;
    v.push_back(root->elements_[i]);

    if (!root->is_leaf_ && i <= root->elements_.size() - 1) {
      // std::cout << "called two" << std::endl;
      std::vector<int> right_subtree = traverse(root->children_[i + 1]);
      v.insert(v.end(), right_subtree.begin(), right_subtree.end());
    }
  }

  return v;
}
