# The Problem

Complete the `listSymmetricDifference` function that accepts two `Node *` (the heads of two linked lists) and returns a `Node *` that points to the head of a new linked list. This function must create a new list (containing new nodes, allocated on the heap) that contains the symmetric difference between the two lists, i.e., all the nodes that occur in exactly one list. Your output list can be in any order, but it should not have any duplicates.

For example:

```
List 1: 0 1 2
	List 2: 3 2 1
	Symmetric Difference: 0 3

	List 1: 0 2 2 2 8 5 6 7 8 9
	List 2: 10 4 2 5 4 5 7 5 9 0
	Symmetric Difference: 4 6 8 10
```

A `main` function has been provided that exercises your `listSymmeticDifference` function.

# Graded files

The only file that will be submitted for grading on this problem is **Node.cpp**
