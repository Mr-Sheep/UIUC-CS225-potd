#include "Friend.h"

int find(int x, std::vector<int>& parents) {
  if (parents[x] == x) {
    return x;
  }
  return parents[x] = find(parents[x], parents);
}

int findCircleNum(std::vector<std::vector<int>>& M) {
  int n = M.size();
  std::vector<int> parents(n);
  for (int i = 0; i < n; i++) {
    parents[i] = i;
  }
  int count = n;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (M[i][j] == 1) {
        int x = find(i, parents);
        int y = find(j, parents);
        if (x != y) {
          parents[x] = y;
          count--;
        }
      }
    }
  }
  return count;
}
