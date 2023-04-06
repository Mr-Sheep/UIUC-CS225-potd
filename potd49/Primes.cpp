#include "Primes.h"

#include <vector>

std::vector<int> *genPrimes(int M) {
  std::vector<int> *v = new std::vector<int>();
  // your code here
  for (int i = 2; i < M; i++) {
    bool prime_check = true;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        prime_check = false;
        break;
      }
    }
    if (prime_check) v->push_back(i);
  }

  return v;
}
