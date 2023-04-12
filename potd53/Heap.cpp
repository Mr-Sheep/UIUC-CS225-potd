#include "Heap.h"

#include <cstddef>
#include <iostream>

void Heap::_percolateDown(int hole) {
  // your code here
  size_t left_index = 2 * hole;
  size_t right_index = 2 * hole + 1;
  size_t largest_index = hole;
  if (left_index < _data.size() && _data[left_index] > _data[largest_index])
    largest_index = left_index;
  if (right_index < _data.size() && _data[right_index] > _data[largest_index])
    largest_index = right_index;

  if (largest_index != hole) {
    std::swap(_data[largest_index], _data[hole]);
    _percolateDown(largest_index);
  }
}

int Heap::size() const { return _data.size(); }

void Heap::enQueue(const int &x) {
  _data.push_back(x);
  int hole = _data.size() - 1;
  for (; hole > 1 && x > _data[hole / 2]; hole /= 2) {
    _data[hole] = _data[hole / 2];
  }
  _data[hole] = x;
}

int Heap::deQueue() {
  int minItem = _data[1];
  _data[1] = _data[_data.size() - 1];
  _data.pop_back();
  _percolateDown(1);
  return minItem;
}

void Heap::printQueue() {
  std::cout << "Current Priority Queue is: ";
  for (auto i = _data.begin() + 1; i != _data.end(); ++i) {
    std::cout << *i << " ";
  }
  std::cout << std::endl;
}

std::vector<int> &Heap::getData() { return _data; }
