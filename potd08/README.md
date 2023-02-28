The Problem
In class you saw how to create a dynamic list of property names. This time we are going to extend that by making a class that keeps track of both properties and values (e.g., property: color, value: green).

Write a class Thing. It should have these private variables:

int props_ct_ to count how many properties we have,
int props_max_ to return the maximum number or properties,
string *properties_ containing the names of the properties,
string *values_ containing the values of the properties.
Your class should have the following methods:

Thing(int size) — a constructor that takes the max size of the properties and values arrays.
Thing(const Thing &) — a copy constructor.
The other two methods you need because of the Rule of Three. Make your own private copy_ and destroy_ methods to assist with this.
int set_property(string name, string value) — Takes a property name and value, and inserts them into the arrays. Returns the index into the array if successul, and -1 if the array was full. If the property name already exists, replace the value.
string get_property(string name) — Returns the corresponding value for a given property name, or else an empty string if that property is not found.
You may want to have a _copy(const Thing &) method, but that is optional.
Testing Your Code
Run the following commands to compile and execute your code:

make
./main
Sample Output
Kermit is Green
Kermit is Green
Grover is Blue

