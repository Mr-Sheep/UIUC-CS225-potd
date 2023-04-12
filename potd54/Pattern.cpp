#include "Pattern.h"

#include <iostream>
#include <string>

bool wordPattern(std::string pattern, std::string str) {
  // write your code here
  std::vector<std::string> words;
  size_t start = 0, end = 0;

  while (end != std::string::npos) {
    end = str.find(' ', start);
    words.push_back(str.substr(start, end - start));
    start = end + 1;
  }

  if (pattern.length() != words.size()) {
    return false;
  }

  std::unordered_map<char, std::string> pattern_to_word;
  std::unordered_map<std::string, char> word_to_pattern;

  for (size_t i = 0; i < pattern.length(); ++i) {
    char p = pattern[i];
    const std::string& word = words[i];

    if (pattern_to_word.count(p) == 0 && word_to_pattern.count(word) == 0) {
      pattern_to_word[p] = word;
      word_to_pattern[word] = p;
    } else if (pattern_to_word[p] != word || word_to_pattern[word] != p) {
      return false;
    }
  }

  return true;
}
