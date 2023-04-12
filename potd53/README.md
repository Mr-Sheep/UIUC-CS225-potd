# POTD

In this problem you are given a max-heap, which means the keys of parent nodes are always greater than or equal to those of the children and the highest key is in the root node (from Wikipedia). Note that the priority queue starts from index 1 of the vector (the number in index 0 can be considered as NULL), so think carefully about the index-relation between parent and child.

You are given an implementation of `enQueue()` function and required to implement the `procolateDown()` function, which is the helper function of `deQueue()`. You can implement it recursively like what you are introduced in the lecture, but you are encouraged to try the non-recursive version like the given `enQueue()` function for practice.

Example Output

```
Current Priority Queue is: 15 12 13 7 10 8 3 1 4 -1 6 5
15 Pop from Priority Queue
13 Pop from Priority Queue
12 Pop from Priority Queue
10 Pop from Priority Queue
8 Pop from Priority Queue
7 Pop from Priority Queue
6 Pop from Priority Queue
5 Pop from Priority Queue
4 Pop from Priority Queue
3 Pop from Priority Queue
1 Pop from Priority Queue
-1 Pop from Priority Queue
```

# Graded files

The only files that will be submitted for grading on this problem is **Heap.cpp**
