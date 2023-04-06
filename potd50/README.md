# The Problem

Given two containers, one of which can accommodate `a` liters of water and the other `b` liters of water, determine the number of steps required to obtain exactly `target` liters of water in one of the containers, or `-1` if it cannot be done.

At the beginning both containers are empty. The following operations are counted as 'steps':

- Empty a container
- Fill a container
- Pour water from one container to the other, without spilling, until one of the containers is either full or empty

To get you started, we provide you a `Node` and a `Graph` class. Your job is to implement the function Graph `createGraph(int capacity_a, int capacity_b)`, which builds a graph that contains all the possible container states given the capacity of two containers, and `int findSolution(Graph g, int target)`, which does the graph traversal and returns the minimum steps.

You can modify the structures if you like, or build your own solution without using the provided structures. We will only test your `int waterPouring(int a, int b, int target)` function.

Hint: Which algorithm gurantees a minimun number of steps to reach a target?

# Testing Your Code

You are provided a main.cpp with one test case.

```
container A: 3L container B: 4L
Minimum number of steps required to get 2L is: 4
```

---

## Graded files

The only files that will be submitted for grading on this problem is **waterPouring.cpp**
