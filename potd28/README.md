# The Problem

Complete the `isHeightBalanced` function that accepts a BST `TreeNode *` root and returns `True` if the tree is height-balanced and `False` if the tree is not height-balanced. Here, the "height balance" of a tree is simply the height of its left-subtree minus the height of its right sub-tree. The "height balance" of an empty tree is 0.

A tree is height-balanced if the height of the two subtrees, i.e left and right subtree of every node in the tree never differ by more than 1.

HINT: It may be helpful to have a helper function for computing height.

# Testing Your Code

In `main.cpp`, a simple test case has been created with the following binary search tree:

```
     8
    /  \
   5    13
  /\   /  \
 4  7  10  14
       \
       11
        \
        12
```

#Graded files
The only files that will be submitted for grading on this problem is `TreeNode.cpp`,`TreeNode.h`
