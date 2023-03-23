# The Problem

(From [POJ problem 2739](http://poj.org/problem?id=2739))

Some positive integers can be represented by a sum of one or more consecutive prime numbers. How many such representations does a given positive integer have? For example, the integer `53` has two representations: `5 + 7 + 11 + 13 + 17` and `53`. The integer `41` has three representations `2+3+5+7+11+13`, `11+13+17`, and `41`. The integer `3` has only one representation, which is `3`. The integer `20` has no such representations. Note that summands must be consecutive prime numbers, so neither `7 + 13` nor `3 + 5 + 5 + 7` is a valid representation for the integer `20`.

Write a function `int *numSequences(std::vector<int> *primes, int num)` that takes a vector of primes that you learned to create for the Primes POTD, an integer of interest, and returns the number of representations for that given positive integer.

We have given you a solution to the Primes POTD to get you started.

```
2 has 1 sequence(s).
3 has 1 sequence(s).
17 has 2 sequences(s).
41 has 3 sequences(s).
```

# Graded files

The only files that will be submitted for grading on this problem is **Primes.cpp**
