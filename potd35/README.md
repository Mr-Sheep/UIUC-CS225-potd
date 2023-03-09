# The Problem

Complete the `traverse` function that accepts a BTree `BTreeNode *` and returns a `vector<int>` containing the inorder traversal of the elements in the BTree nodes. Each BTree Node is made up of a `vector<int>` elements, which are the values in the node and a `vector<BTreeNode*>` children which is a vector of child pointers. Your code should go in `BTreeNode.cpp.`

Definition for a BTree node:

```
struct BTreeNode {
    bool is_leaf=true;
    std::vector<int> elements;
    std::vector<BTreeNode*> children;
    BTreeNode() {}
    BTreeNode (std::vector<int> v) {
        this->elements = v;
    }
};
```

# Example:

In `main.cpp`, an exmaple BTree has been provided to help you test your code:

```
traverse(root):

            [30    60]
          /      |     \
      [10 20]  [40 50]  [70 80]
```

Result:

```
10
20
30
40
50
60
70
80
```

# Graded files

The only files that will be submitted for grading on this problem is **BTreeNode.cpp**,**BTreeNode.h**
