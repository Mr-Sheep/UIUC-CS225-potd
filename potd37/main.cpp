#include "functions.h"
#include "potd.h"
#include <iostream>
#include <vector>

int main() {
  std::vector<int> ret(7, 0);

  // Test validUsername
  if (validUsername("abc123") && validUsername("a2b3c4")) {
    ret[0] = 1;
  }

  // Test arrayIndex
  if (arrayIndex(0) && arrayIndex(1) && arrayIndex(5) && arrayIndex(2) &&
      arrayIndex(14)) {
    ret[1] = 1;
  }

  // Test countPrimes
  if (countPrimes(2) == 1 && countPrimes(10) == 4 && countPrimes(12) == 5 &&
      countPrimes(100) == 25) {
    ret[2] = 1;
  }

  // Test factorial
  if (factorial(0) == 1 && factorial(5) == 120 && factorial(12) == 479001600) {
    ret[3] = 1;
  }

  // Test samesies
  if (samesies(-(INT_MAX / 2), -(INT_MAX / 2)) && samesies(5, 5) &&
          !samesies(5, 6) && samesies(-100, -100),
      samesies(INT_MAX / 2, INT_MAX / 2)) {
    ret[4] = 1;
  }

  // Test absolutely
  if (absolutely(-19890604) == 19890604 && absolutely(-5) == 5 &&
      absolutely(0) == 0 && absolutely(2147483647) == 2147483647 &&
      absolutely(-2147483648) == -2147483648) {
    ret[5] = 1;
  }

  // Test magnaCalca
  if (magnaCalca(0, 0) == 0 && magnaCalca(100, 100) == 0 &&
      magnaCalca(-100, 100) == 200 && magnaCalca(-50, -100) == 50) {
    ret[6] = 1;
  }

  for (auto x : ret) {
    std::cout << x << std::endl;
  }
}
