#include <cmath>
#include <cstddef>
#include <iostream>

#include "MinHeap.h"

vector<int> lastLevel(MinHeap& heap) {
  vector<int> ret;

  size_t size = heap.elements.size();
  int height = (int)std::floor(std::log2(size - 1));
  double leaf_start_index = std::pow(2, height);

  for (size_t i = leaf_start_index; i < size; i++) {
    ret.push_back(heap.elements[i]);
  }
  return ret;
}
