# The Problem

Implement the following functions in `potd.cpp`:

- `double sum(vector<double>::iterator start, vector<double>::iterator end)` - returns the sum of elements between start to end. The element at start is included, but the element at end is not.
- `vector<double>::iterator max_iter(vector<double>::iterator start, vector<double>::iterator end)` - returns an iterator that points to the element with the largest value between start and end.
- `void sort_vector(vector<double>::iterator start, vector<double>::iterator end)` - sort, in descending order, part of an array between start to end. Hint: use max_iter.

# Testing Your Code

There is a main function in `main.cpp` that produces the following output:

````
v1:  0 1 2 3 4 5 6 7 8 9
	Sum of all elements in v1: 45
	Sum of the first half of v1: 10
	Sum of the second half of v1: 35

	v2:  7 2 5 8 100 4 -1 3 0 9
	The largest element in v2: 100
	The largest element in the first half of v2: 100
	The largest element in the first half of v2: 9

	v3:  7 2 5 8 100 4 -1 3 0 9
	Sorted v3:  100 9 8 7 5 4 3 2 0 -1

	v4:  7 2 5 8 100 4 -1 3 0 9
	Partially sort_vectored v4:  7 2 100 8 5 4 3 -1 0 9
	```

---
# Graded files
The only file that will be submitted for grading on this problem is `potd.cpp`
````
