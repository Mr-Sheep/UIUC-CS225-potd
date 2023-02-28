# The Problem

Complete the deleteNode function that accepts a BST TreeNode \* and a key, and returns the root node of the updated BST. Note that the correct implementation will print the increasing inorder list after removal. There are 3 types of removal you would need to take care of:

# Example 1 (remove a leaf):

```
key = 14

    9
   / \
  5   12
 /\   / \
2  7 10 14
```

After deleteNode(14):

```
    9
   / \
  5   12
 /\   /
2  7 10
```

# Example 2 (remove a node with 1 child):

```
key = 12

    9
   / \
  5   12
 /\   /
2  7 10
```

# After deleteNode(12):

```
    9
   / \
  5   10
 /\
2  7
```

# Example 3 (remove a node with 2 children):

For two child deletion use the inorder successor as the replacement.

```
key = 5
9
/ \
 5 10
/\
2 7
```

After deleteNode(5):

```
    9
   / \
  7  10
 /
2
```

# Graded files

The only files that will be submitted for grading on this problem is` TreeNode.cpp`
