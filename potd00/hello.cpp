/* Your code here! */
#include "hello.h"
#include <string>
#include <iostream>

std::string hello() {
    int age = 888;
    std::string name = "Trump";
    std::string dummy = "Hello world! My name is " + name + " and I am " + std::to_string(age) + " years old.";
    return dummy;
}
