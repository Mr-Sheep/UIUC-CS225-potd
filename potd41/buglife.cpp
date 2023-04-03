#include <vector>

using namespace std;
// returns true if a counterexample is found
bool bugLife(int numBugs, vector<int> &b1, vector<int> &b2) {
  vector<int> gender(numBugs, -1);  // initialize to unknown gender

  for (int i = 0; i < b1.size(); i++) {
    int bug1 = b1[i] - 1;
    int bug2 = b2[i] - 1;

    if (gender[bug1] == -1 && gender[bug2] == -1) {
      gender[bug1] = 0;
      gender[bug2] = 1;
    }

    else if (gender[bug1] == -1) {
      gender[bug1] = 1 - gender[bug2];
    } else if (gender[bug2] == -1) {
      gender[bug2] = 1 - gender[bug1];
    }

    else if (gender[bug1] == gender[bug2]) {
      return true;
    }
  }

  return false;
}
