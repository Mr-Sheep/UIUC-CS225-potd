# The Problem

Complete the `listUnion` and `insertSorted` function. `listUnion` accepts two `Node *`(the heads of two linked lists) and returns a `Node *` that points to the head of a new linked list. This function must create a new list (containing new nodes, allocated on the heap) that contains the set union of the values in both lists. `insertSorted` creates a new node and add it to the list, while keeping the list sorted.

For example:

```
List 1: 0 1 2
        List 2: 2 3 4
        Union: 0 1 2 3 4

        List 1: 0 2 2 2
        List 2: 0 0 0 4
        Union: 0 2 4
```

The order of nodes in your new list does not matter, only that it is a proper union. A main function has been provided that exercises your listUnion function.

---

## Graded files

The only file that will be submitted for grading on this problem is `Node.cpp`
