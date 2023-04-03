#include <algorithm>
#include <iostream>

#include "tree.h"

template <class T>
void print(std::vector<T> v) {
  std::cout << "<";
  for (size_t i = 0; i < v.size(); i++) {
    std::cout << v[i] << (i != v.size() - 1 ? ", " : "");
  }
  std::cout << ">" << std::endl;
}

int main() {
  Tree<int *> t;
  int *vals = new int[6];
  t.setRoot(new Tree<int *>::Node(
      &vals[0],
      new Tree<int *>::Node(&vals[1], NULL, new Tree<int *>::Node(NULL)),
      new Tree<int *>::Node(
          &vals[2], new Tree<int *>::Node(&vals[3]),
          new Tree<int *>::Node(NULL, new Tree<int *>::Node(&vals[4]),
                                new Tree<int *>::Node(&vals[5])))));
  // preorder & bfs
  // std::vector<int *> expected = {&vals[0], &vals[1], &vals[2],
  //                                &vals[3], &vals[4], &vals[5]};

  // inorder
  // std::vector<int *> expected = {&vals[5], &vals[4], &vals[2],
  //                                &vals[3], &vals[0], &vals[1]};

  // postorder
  // std::vector<int *> expected = {&vals[1], &vals[3], &vals[4],
  //                                &vals[5], &vals[2], &vals[0]};

  std::vector<int *> actual;
  for (int *i : t) actual.push_back(i);
  std::cout << "Expected: ";
  print(expected);
  std::cout << "Actual  : ";
  print(actual);
  delete[] vals;
}