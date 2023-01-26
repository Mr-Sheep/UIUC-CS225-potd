The Problem
In today's POTD, we are going to explore virtual methods and simple polymorphism in C++.

You will be writing two classes: Base and Derived, Derived is derived from Base. They will each have two methods, string foo() and string bar().

TODO:

For Base, have foo() return "Sam I Am"
For Derived, have foo() return "I will not eat them."
For Base, have bar() return "Green Eggs"
For Derived, have bar() return "And Ham"
Note that one of these strings includes a period, but the others do not.
Method foo() should be a regular method.
Method bar() should be virtual.
Create a virtual destructor for both classes. It won't do anything except keep the compiler from complaining.
Do not create any namespaces for this problem.
Testing Your Code
Run the following commands to compile and execute your code:

make
./main
Sample Output
Sam I Am
Sam I Am
I will not eat them.
Green Eggs
And Ham
And Ham
Check main.cpp. Are the results what you expected?

Graded files
The only files that will be submitted for grading on this problem is Base.cpp,Derived.cpp,Base.h,Derived.h
