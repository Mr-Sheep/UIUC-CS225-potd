#include "potd.h"

// Your code here!
double sum(vector<double>::iterator start, vector<double>::iterator end) {
  double sum = 0.0;
  for (vector<double>::iterator it = start; it != end; it++) {
    sum += *it;
  }
  return sum;
}

vector<double>::iterator max_iter(vector<double>::iterator start,
                                  vector<double>::iterator end) {
  vector<double>::iterator max = start;
  for (vector<double>::iterator it = start; it != end; it++) {
    if (*it > *max) {
      max = it;
    }
  }
  return max;
}

void sort_vector(vector<double>::iterator start, vector<double>::iterator end) {
  // do it the easy way lmfao
  std::sort(start, end, std::greater<double>());
  //   for (vector<double>::iterator it = start; it != end; it++) {
  //     for (vector<double>::iterator iter = it; iter != end; iter++) {
  //       if (*it < *iter) {
  //         double temp = *iter;
  //         *iter = *it;
  //         *it = temp;
  //       }
  //     }
  //   }
}