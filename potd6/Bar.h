// your code here
#pragma once
#include "Foo.h"
using namespace std;

namespace potd {
    class Bar {
            private:
                Foo * f_;
            public:
                                            Bar(string str) {
                                                            f_ = new Foo(str);
                                                                        }
                                                                                    Bar(const Bar& rhs) {
                                                                                                    f_ = new Foo(rhs.f_->get_name());
                                                                                                                }
                                                                                                                            Bar & operator=(const Bar& rhs) {
                                                                                                                                delete f_;
                                                                                                                                f_ = new Foo(rhs.f_ -> get_name());
                                                                                                                                            // f_ = rhs.f_;
                                                                                                                                                            return *this;
                                                                                                                                                                        }    
                                                                                                                                                                                    ~Bar(){
                                                                                                                                                                                                    f_->~Foo();
                                                                                                                                                                                                                }
                                                                                                                                                                                                                            string get_name() {
                                                                                                                                                                                                                                            return f_->get_name();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                            };
                                                                                                                                                                                                                                                            }
