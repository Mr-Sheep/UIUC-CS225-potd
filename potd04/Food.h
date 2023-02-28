// Your code here
#ifndef FOOD_H
#define FOOD_H

# include <string>
using namespace std;

class Food {
    private:
        string name_;
        int quantity_;
    public: 
        Food() : name_{""}, quantity_{0} {}
        string get_name() const {return name_;}
        void set_name(std::string name) {
            name_ = name;
        }
        int get_quantity() const {return quantity_;}
        void set_quantity(int n) {
            quantity_ = n;
        }
};
#endif
