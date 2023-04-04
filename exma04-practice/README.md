Implement an iterator for a binary tree that only iterates over **non-NULL** values in the tree using a **inorder right-to-left** traversal. Recall that this traverses the right subtree first, followed by the current node and then the left subtree.

Although the `Tree` class is templated and can hold data of any type, we will only test with pointer types.

Complete the following functions in `tree.hpp`:

- `Tree<T>::Iterator constructor`
- `Tree<T>::Iterator::operator++`
- `Tree<T>::Iterator::operator*` (note: calling `operator*` on an end iterator should return a default value of type `T`)

The following Iterator functions are implemented for you:

- `Tree<T>::Iterator::operator!=`
- `Tree<T>::begin()`
- `Tree<T>::end()`

Partial credit is available for a working iterator that includes all values in the tree (full credit requires only non-NULL values).

# Potentially Useful References

- stack reference
- queue reference
- Reference root

# Compile and Test

A Makefile and a `main` function with basic usage of the Iterator are provided. To compile and test, run:

`make && ./main`

---

# Graded files

The only file that will be submitted for grading on this problem is **tree.hpp**
