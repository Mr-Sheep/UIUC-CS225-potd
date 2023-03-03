# The Problem

In order to balance a tree, we have to first find nodes about which rotations have to be made. In this question, complete the `findLastUnbalanced` function that accepts a `TreeNode *` root and finds the deepest node that is unbalanced. Remember that an unbalanced node has subtrees of heights differing by more than 1.

Note: If there are multiple unbalanced nodes, you have to return the one farthest from the root. If there are no unbalanaced nodes, return `NULL`.

Hint: You can use a helper function for calculating height.

# Testing Your Code

In main.cpp, a simple test case has been created with the following binary search tree:

Example Input:

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

Example Output: `TreeNode *` pointing to node 10.

# Graded files

The only files that will be submitted for grading on this problem is TreeNode.cpp,TreeNode.h
