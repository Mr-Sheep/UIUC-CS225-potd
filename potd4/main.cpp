// your code here
#include "q5.h"
#include <iostream>
#include <string>
int main() {
    Food something;
    something.set_name("cs225");
    something.set_quantity(69);
    cout << something.get_quantity() << something.get_name() << endl;
    increase_quantity(&something);
    cout << something.get_quantity() << something.get_name() << endl;
}
