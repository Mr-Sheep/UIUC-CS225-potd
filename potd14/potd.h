//
// Write a templated function `more` which takes in two variables of the same
// type and returns whichever variable is greater than (`>`) the other.
//
#ifndef POTD_H
#define POTD_H

template <typename T> const T &fewer(const T &one, const T &two) {
  if (one < two)
    return one;
  else
    return two;
}
#endif
