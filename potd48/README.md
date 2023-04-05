# The Problem

There are N students in a class. Some of them are friends, while some are not. Their friendship is transitive in nature. For example, if $A$ is a direct friend of $B$, and $B$ is a direct friend of $C$, then $A$ is an indirect friend of
$C$. And we defined a friend circle is a group of students who are direct or indirect friends.

Given a $N \cross N$ matrix M representing the friend relationship between students in the class. If $M[i][j]=1$, then the
$i$th and
$j$th students are direct friends with each other, otherwise not. And you have to output the total number of friend circles among all the students.

You should use disjoint sets to solve this problem. Hint: At first, every student belongs to one circle which only contains himself. Once you find a relationship between two students, "union" the two circles they each belongs to.

# Example Input

Student 0 and 1 are friends, student 1 and 2 are friends, student 3 doesn't have any friends.

```
Matrix M = [[1,1,0,0], [1,1,1,0], [0,1,1,0], [0,0,0,1]]
```

# Example Output

Circle 1: student 0, 1, and 2; Circle 2: student 3.

```
Number of friend circle for class 0 is 2.
```

# Compile and Test

A complete Makefile and a main.cpp file containing some more test cases have been provided for you.

Expected output:

```
Number of friend circle for class 1 is 1
Number of friend circle for class 2 is 2
Number of friend circle for class 3 is 3
```

# Graded files

The only files that will be submitted for grading on this problem is **Friend.h,Friend.cpp**
