# The Problem

Write a fortune telling program (similar to a "Magic 8 Ball")!

- The provided `main` file creates a string `s` containing the first argument given to your program (`argv[1]`).

- Based on the value of the string s, your function should output a fortune.

- The fortune must be the same when the same string is given (it must be deterministic).

- There must be at least 5 different fortunes and every string must map to one fortune. The fortunes must not be the empty string.

- Use (length of string) modulo (number of fortunes) to determine the fortune.

- Place your function `string getFortune(const string &s)` in `potd.cpp`.

Here is a sample run from the instructor's solution. Your strings do not need to match. (The % is the shell prompt.)

```
% ./main "Will I get an A?"
As you wish!

% ./main "Where is the bug?"
Nec spe nec metu!

% ./main "Should I eat that?"
Do, or do not. There is no try.

% ./main "Why this segfault?!"
This fortune intentionally left blank.

% ./main "What is on the exam?"
Amor Fati!
```

# Graded files

The only files that will be submitted for grading on this problem is `potd.cpp`
