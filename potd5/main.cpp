// Your code here! :)
#include "q6.h"
using namespace std;

int main() {
    potd::Student S;
    S.set_name("s");
    S.set_grade(5);
    cout << S.get_name() << " " << S.get_grade() << endl;
    graduate(S);
    cout << S.get_name() << " " << S.get_grade() << endl;
    
}
