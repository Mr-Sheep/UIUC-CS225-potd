The Problem
The game of chess is made up of a board and pieces of different types and colors. Two different classes exist in this problem:

Piece, a class representing a generic chess piece
Queen, a class representing a queen
First, modify the Queen class so that it extends the Piece class (public).

Then add two public methods, with the same name, to the two classes:

In the Piece class, add the method string Piece::getType() that returns "Unknown Piece Type".
In the Queen class, add the method string Queen::getType() that returns "Queen".
Testing Your Code
We provide you with a main.cpp. In main, we create a Queen and call the same function on it in different context. Run the following commands to compile and execute your code:

make
./main
Sample Output
In main, printType() of Queen *q is: Queen
In printPiece, printType() of the same memory address is: Unknown Piece Type
Graded files
The only files that will be submitted for grading on this problem is Piece.cpp,Piece.h,Queen.cpp,Queen.h
