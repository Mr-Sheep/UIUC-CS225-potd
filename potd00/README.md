The Files
Here's a brief description of the files you've been given:

hello.h: Declares the hello function that you will implement
hello.cpp: Put your code in here.
q1.cpp: A driver file to run your function and print its result.
Makefile: Compiles your code for you.
The Problem
You will be completing a program that prints out your name and age to stdout. All the code you write will go in hello.cpp

TODO:

Create a variable to hold your age
Create a variable to hold your name
Initialize the values of these two variables
Write a function hello that takes no arguments and returns a std::string containing the following text: "Hello world! My name is your_name and I am your_age years old." where your_name and your_age are the values of your name and age variables.
The autograder is not that smart. It will be reasonably accommodating about your name, accept any integer for an age, but the rest of the text must match exactly.

In C++, text is stored in a string type. We haven't gone over that in class yet, but a quick Google search should enlighten you on how to use it.

Testing Your Code
Run the following commands to compile and execute your code:

make
./main
Sample Output
Let's say your name is Jared, and you're 19 years old. When you run ./main, you should see the following:

Hello world! My name is Jared and I am 19 years old.
