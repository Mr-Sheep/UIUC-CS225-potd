The Problem
Write a class Animal. This class must:

Store the type of animal as a string type_.

This variable must only be able to be changed by functions of the Animal class.

Store the type of food the animal eats as a string food_

This variable should be able to be accessed by functions of the Animal class and functions of derived classes.

Contain getter and setter functions getType, setType, getFood, and setFood.

Contain a function print that returns a string "I am a ______.", where the blank contains the type of the animal.

This function should be able to be overridden by derived classes.

Contain two constructors:

A default that initializes the animal type to "cat" and type of food to "fish".

A constructor that accepts the type of the animal and type of food as parameters.

Testing Your Code
We have given you a main.cpp to test this. The expected output is:

Default constructor:
  Type: cat, Food: fish
I am a cat

Two parameter constructor:
  Type: horse, Food: hay
I am a horse

After using setters:
  Type: snake, Food: mouse
I am a snake
Graded files
The only files that will be submitted for grading on this problem is Animal.cpp,Animal.h
