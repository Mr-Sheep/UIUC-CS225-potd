#include <iostream>
using namespace std;

#include "waterPouring.cpp"

int main() {
  int volumeA = 3, volumeB = 4, target = 2;

  printf("container A: %dL\tcontainer B: %dL\n", volumeA, volumeB);
  printf("Minimum number of steps required to get %dL is: %d\n", target,
         waterPouring(volumeA, volumeB, target));
}
