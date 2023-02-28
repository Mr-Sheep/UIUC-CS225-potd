The Problem
Today you will become one with the Rule of Three. You are given a class Foo that takes a name for its constructor. The Foo has a get_name() method that returns the name of the Foo. The Foo class also keeps track of how many Foo's exist using something called a class variable, but that is not something we have gone over in class yet.

Your work is to create a Bar class that also has a name, but it stores its name by creating a new Foo. You will put your code in Bar.h and Bar.cpp. This class should reside in the potd namespace.

TODO: The class Bar, including:

A private member variable Foo * f_.
A constructor that takes a string.
A copy constructor.
A destructor.
An operator=.
A method string get_name() to return the name contained within f_.
Be sure to allocate your memory correctly!

Testing Your Code
This time we give you a main.cpp. Run the following commands to compile and execute your code:

make
./main
Sample Output
There are 0 Foo's in the world.
There are 1 Foo's in the world.
There are 2 Foo's in the world.
There are 3 Foo's in the world.
b1 is aramis
b2 is aramis
b3 is porthos
There are 3 Foo's in the world.
b1 is porthos
b2 is porthos
b3 is porthos
There are 2 Foo's in the world.
There are 1 Foo's in the world.
There are 0 Foo's in the world.
