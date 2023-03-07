# The Problem

Complete the `rightRotate` and `leftRotate` functions that accepts a `TreeNode *` root and rotate it to generate a balanced tree using AVL rotations. Note that tree nodes structure also have parent pointers which you have to manipulate. Use the Wikipedia link given below for reference.

[Wikipedia Link for Tree Rotations](https://en.wikipedia.org/wiki/Tree_rotation#Illustration)

Put your `rightRotate` and `leftRotate` functions in `TreeNode.cpp`.

The `main.cpp` file has some example inputs.

Example Input 1:

```
      10
     / \
    8   13
   /
  5
 /
2
```

Expected Output:

```
    10
   / \
  5   13
 / \
2   8
```

Example Input 2:

```
  5
 / \
2   8
     \
      10
       \
        13
```

Expected Output:

```
  5
 / \
2   10
   / \
  8   13
```

# Graded files

The only files that will be submitted for grading on this problem is `TreeNode.h`,`TreeNode.cpp`
