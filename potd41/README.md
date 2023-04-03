# The Problem

Note, this is a two day POTD. It will be due one day later than normal and it will be worth 2 points. It is a harder problem since you have more time to complete it. Best of luck!

Based on [SPOJ Problem BUGLIFE](http://www.spoj.com/problems/BUGLIFE/).

Professor Hopper is researching the sexual behavior of a rare species of bugs. He assumes that they feature two different genders and that they only interact with bugs of the opposite gender. In his experiment, individual bugs and their interactions were easy to identify, because numbers were printed on their backs.

Given a list of bug interactions, decide whether the experiment supports his assumption of two genders with no homosexual bugs or if it contains some bug interactions that falsify it.

## Input

The first line of the input contains the number of scenarios. Each scenario starts with one line giving the number of bugs (at least one, and up to 2000) and the number of interactions (up to 1000000) separated by a single space. In the following lines, each interaction is given in the form of two distinct bug numbers separated by a single space. Bugs are numbered consecutively starting from one.

## Output

The output for every scenario is a line containing “Scenario #i:”, where i is the number of the scenario starting at 1, followed by one line saying either “No suspicious bugs found!” if the experiment is consistent with his assumption about the bugs’ sexual behavior, or “Suspicious bugs found!” if Professor Hopper’s assumption is definitely wrong.

# Your work

The given `main` function will collect the pairs of interactions for you and place them in vectors b1 and b2. Your work is to write a function `bool bugLife(int numBugs, vector<int> &b1, vector<int> &b2)` that returns `true` if a counterexample is found, and `false` otherwise.

# Example

Input:

```
2
3 3
1 2
2 3
1 3
4 2
1 2
3 4
```

Output:

```
Scenario #1:
Suspicious bugs found!
Scenario #2:
No suspicious bugs found!
```

# Graded files

The only files that will be submitted for grading on this problem is **buglife.cpp**
