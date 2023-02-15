#include <stack>
#include <string>

using namespace std;

bool isValid(string input) {
  stack<char> st;
  for (char &x : input) {
    if (x == '(' || x == '{' || x == '[') {
      st.push(x);
    } else {
      if (x == ')') {
        if (!st.empty() && (st.top() == '('))
          st.pop();
        else
          return false;
      } else if (x == '}') {
        if (!st.empty() && (st.top() == '{'))
          st.pop();
        else
          return false;
      } else if (x == ']') {
        if (!st.empty() && (st.top() == '['))
          st.pop();
        else
          return false;
      } else {
        continue;
      }
    }
  }
  if (st.empty())
    return true;
  return false;
}