// clang-format off
#include "HuffmanNode.h"
#include "HuffmanUtils.h"
#include <string>
#include <unordered_map>
// clang-format on

using std::string;

void encode(const HuffmanNode *node, const std::string &code,
            std::unordered_map<char, std::string> &encodingTable) {
  if (node == nullptr) {
    return;
  }
  if (node->left_ == nullptr && node->right_ == nullptr) {
    encodingTable[node->char_] = code;
    return;
  }
  encode(node->left_, code + "0", encodingTable);
  encode(node->right_, code + "1", encodingTable);
}

/**
 * binaryToString
 *
 * Write a function that takes in the root to a huffman tree
 * and a binary string.
 *
 * Remember 0s in the string mean left and 1s mean right.
 */

string binaryToString(string binaryString, HuffmanNode *huffmanTree) {
  std::string str = "";
  const HuffmanNode *node = huffmanTree;
  for (const char &c : binaryString) {
    if (c == '0') {
      node = node->left_;
    } else if (c == '1') {
      node = node->right_;
    }

    if (node->left_ == nullptr && node->right_ == nullptr) {
      str += node->char_;
      node = huffmanTree; // return to the top for next iteration
    }
  }
  return str;
}

/**
 * stringToBinary
 *
 * Write a function that takes in the root to a huffman tree
 * and a character string. Return the binary representation of the string
 * using the huffman tree.
 *
 * Remember 0s in the binary string mean left and 1s mean right
 */

string stringToBinary(string charString, HuffmanNode *huffmanTree) {
  std::unordered_map<char, std::string> encodingTable;
  encode(huffmanTree, "", encodingTable);
  std::string binaryString = "";
  for (const char &c : charString) {
    if (encodingTable.count(c)) {
      binaryString += encodingTable[c];
    }
  }
  return binaryString;
}
