#include "potd.h"
std::string getFortune(const std::string &s) {
  int random = 5;
  int ret = s.length() % random;

  switch (ret) {
  case 0:
    return "As you wish!";
  case 1:
    return "Nec spe nec metu!";
  case 2:
    return "Do, or do not. There is no try.";
  case 3:
    return "Your hard work will pay off.";
  case 4:
    return "Amor Fati!";
  default:
    return "This fortune intentionally left blank.";
  }
}