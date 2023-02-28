#pragma once

#include <cstddef>
#include <queue>

using namespace std;

class Queue {
public:
  Queue();
  ~Queue();
  int size() const;
  bool isEmpty() const;
  void enqueue(int value);
  int dequeue();

private:
  queue<int> q;
};