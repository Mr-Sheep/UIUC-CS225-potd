# The Problem

Based on [Kattis Problem 2048](https://open.kattis.com/problems/2048).

2048 is a single-player puzzle game created by Gabriele Cirulli. It is played on a 4×4 grid that contains integers ≥2 that are powers of 2. The player can use a keyboard arrow key (left/up/right/down) to move all the tiles simultaneously. Tiles slide as far as possible in the chosen direction until they are stopped by either another tile or the edge of the grid. If two tiles of the same number collide while moving, they will merge into a tile with the total value of the two tiles that collided. The resulting tile cannot merge with another tile again in the same move. Please observe this merging behavior carefully in all Sample Inputs and Outputs.

## Input

The input is always a valid game state of a 2048 puzzle. The first four lines of input, that each contains four integers, describe the 16 integers in the 4×4 grid of 2048 puzzle. The j-th integer in the i-th line denotes the content of the cell located at the i-th row and the j-th cell. For this problem, all integers in the input will be either {0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024}. Integer 0 means an empty cell.

The fifth line of input contains an integer 0, 1, 2, or 3 that denotes a left, up, right, or down move executed by the player, respectively.

## Output

Output four lines with four integers each. Two integers in a line must be separated by a single space. This describes the new state of the 4×4 grid of 2048 puzzle. Again, integer 0 means an empty cell. Note that in this problem, you can ignore the part from the 2048 puzzle where it introduces a new random tile with a value of either 2 or 4 in an empty spot of the board at the start of a new turn.

# Your work

Write a function `void run2048(int puzzle[4][4], int dir)`. Variable `puzzle` contains your puzzle, with the first index being the row and the second being the column. Variable `dir` is the direction.

Your function should modify the array to contain the result of the move.

Example 1
For this input:

```
2 0 0 2
4 16 8 2
2 64 32 4
1024 1024 64 0
1
```

Your program should output

```
2 16 8 4
4 64 32 4
2 1024 64 0
1024 0 0 0
```

Example 2
For this input:

```
2 0 0 2
4 16 8 2
2 64 32 4
1024 1024 64 0
3
```

Your program would output:

```
2 0 0 0
4 16 8 0
2 64 32 4
1024 1024 64 4
```

There are some more examples in your problem directory; the `in.txt` files are your sample inputs, and your `out.txt` are your sample outputs.

# Graded files

The only files that will be submitted for grading on this problem is **2048.cpp**
