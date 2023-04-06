#include <algorithm>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

#define EMPTY 0

class Node {
 public:
  int a;
  int b;
  vector<Node *> neighbors;
  Node() : a(EMPTY), b(EMPTY), neighbors() {}
  Node(const int &a_, const int &b_) : a(a_), b(b_), neighbors() {}
  Node(const int &a_, const int &b_, const vector<Node *> &neighbors_)
      : a(a_), b(b_), neighbors(neighbors_) {}
  Node(const Node &tmpNode) : a(tmpNode.a), b(tmpNode.b), neighbors() {}
  bool operator==(const Node &b_node) { return a == b_node.a && b == b_node.b; }
  Node &operator=(const Node &b_node) {
    // WARNING: This operator does not copy the vector
    a = b_node.a;
    b = b_node.b;
    return *this;
  }
};

struct Graph {
  vector<Node *> nodes;
};

Graph createGraph(int capacity_a, int capacity_b) {
  // TODO
  Graph g;
  for (int i = 0; i <= capacity_a; i++) {
    for (int j = 0; j <= capacity_b; j++) {
      g.nodes.push_back(new Node(i, j));
    }
  }

  for (int i = 0; i <= capacity_a; i++) {
    for (int j = 0; j <= capacity_b; j++) {
      Node *node = g.nodes[i * (capacity_b + 1) + j];
      if (i < capacity_a) {
        node->neighbors.push_back(g.nodes[capacity_a * (capacity_b + 1) + j]);
      }
      if (j < capacity_b) {
        node->neighbors.push_back(g.nodes[i * (capacity_b + 1) + capacity_b]);
      }
      if (i > 0) {
        node->neighbors.push_back(g.nodes[j]);
      }
      if (j > 0) {
        node->neighbors.push_back(g.nodes[i * (capacity_b + 1)]);
      }
      if (i > 0 && j < capacity_b) {
        int diff = min(i, capacity_b - j);
        node->neighbors.push_back(
            g.nodes[(i - diff) * (capacity_b + 1) + (j + diff)]);
      }
      if (j > 0 && i < capacity_a) {
        int diff = min(j, capacity_a - i);
        node->neighbors.push_back(
            g.nodes[(i + diff) * (capacity_b + 1) + (j - diff)]);
      }
    }
  }
  return g;
}

int findSolution(Graph g, int target) {
  // TODO: returns minimum number of steps to reach target liters of water (or
  // -1)
  queue<pair<Node *, int>> q;
  unordered_map<int, unordered_map<int, bool>> visited;

  q.push({g.nodes[0], 0});
  visited[0][0] = true;

  while (!q.empty()) {
    Node *curr_node = q.front().first;
    int steps = q.front().second;
    q.pop();

    if (curr_node->a == target || curr_node->b == target) {
      return steps;
    }

    for (Node *neighbor : curr_node->neighbors) {
      if (!visited[neighbor->a][neighbor->b]) {
        visited[neighbor->a][neighbor->b] = true;
        q.push({neighbor, steps + 1});
      }
    }
  }
  return -1;
}

int waterPouring(int a, int b, int target) {
  // Call createGraph
  // Call findSolution
  Graph stateMachineGraph = createGraph(a, b);
  int steps = findSolution(stateMachineGraph, target);
  for (Node *graphNode : stateMachineGraph.nodes) {
    delete graphNode;
  }
  return steps;
}
