# Balancing an AVL Tree

In a previous POTD, we were able to identify the deepest nodes that were unbalanced in an AVL tree. Now it is time for you to actually balance them!

Your task is to implement the following function

- `balanceTree(TreeNode*& subroot)` Returns which rotation type to use

A RotationType, which is defined in the TreeNode.h is simply an enumeration, which can take on the values:

- `right`
- `left`
- `rightLeft`
- `leftRight`

You are given the following helper functions

- `leftHeavy(const TreeNode* subroot)` Returns true iff the right subtree is higher

- `rightHeavy(const TreeNode* subroot)` Returns true iff the left subtree is higher
- `getHeight(const TreeNode* subroot)` Returns the height of the given subtree
- `printTreePreOrder(const TreeNode* subroot)` Prints the tree in pre order traversal

Given this unbalanced AVL tree:

```
      14
     / \
    11   22
   /  \
  7   13
 /
4
```

Calling balanceTree on node 14 should return the right rotation type because that is the correct rotation in order to balance the AVL tree, making it look like this.

```
      11
     / \
    7   14
   /   /  \
  4   13   22
```

# Graded files

The only files that will be submitted for grading on this problem is `TreeNode.cpp`
