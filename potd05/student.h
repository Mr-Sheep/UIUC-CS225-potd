// Your code here! :)
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
namespace potd {
  class Student {
      private:
          std::string name_;
              int grade_;
                public:
                    Student() = default;
                        void set_grade(int grade) {grade_ = grade;}
                            int get_grade() const {return grade_;}
                                std::string get_name() const {return name_;}
                                    void set_name(std::string name) {name_ = name;}
                                    };
}

#endif
