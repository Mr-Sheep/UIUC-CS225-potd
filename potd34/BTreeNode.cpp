#include "BTreeNode.h"
#include <vector>

BTreeNode *find(BTreeNode *root, int key) {
  size_t i = 0;
  while (i < root->elements_.size() && root->elements_[i] < key)
    i++;

  if (i < root->elements_.size() && root->elements_[i] == key)
    return root;

  if (root->is_leaf_)
    return NULL;
  else
    return find(root->children_[i], key);
}
