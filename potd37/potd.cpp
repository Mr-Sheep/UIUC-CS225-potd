#include "potd.h"
#include "functions.h"
#include <limits.h>
#include <vector>

std::vector<int> evaluate() {
  std::vector<int> ret(7, 0);
  ret[0] = 0; // initialize hasNumber
  ret[1] = 0; // array of boolean
  ret[2] = 1;
  ret[3] = 1;
  ret[4] = 1;
  ret[5] = 0; // edge case: absolutely(-2147483648) == -2147483648
  ret[6] = 1;

  return ret;
}
