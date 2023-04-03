Your goal is to implement directed graphs using adjacency matrices

# Your Job

The given `main` function will test your implementation of directed graphs via adjacency matrices by creating a graph and testing its edges and nodes. Your are provided a simple set of structs to work with as well as the function `createVertices(int n)` which creates a graph of `n` vertices with no edges.

Your job is to implement the functions:

- `containsEdge(Graph const * const g, int src, int dest)` which outputs `true` or `false` based on whether graph `g` contains an edge from `src` to `dest`.
- `addEdge(int src, int dest)` which creates a directed edge from vertex `src` to vertex `dest`. There should at most be one unique edge between any two pairs of nodes (including itself)
- `numOutgoingEdges(Graph const * const g, int v)` which outputs the number of outgoing edges for vertex `v` in graph `g`
- `numIncomingEdges(Graph const * const g, int v)` which outputs the number of incoming edges for vertex `v` in graph `g`

Note: This graph may contain directed edges to itself. Self-edges count as both an incoming and outgoing edge. If a node contains only one edge which points to itself, then the number of incoming and outgoing edges is 1 in that case.

# Example

`Graph* g = createVertices(3) addEdge(g, 0, 1) addEdge(g, 1, 0) addEdge(g, 2, 1)`

Would create a graph with 3 nodes (`0`, `1`, `2`) with edges from `0` to `1`, `1` to `0`, and `2` to `1`. Therefore, the output should look something like this:

Vertex: 0 Number of incoming edges: 1 Number of outgoing edges: 1

Vertex: 1 Number of incoming edges: 2 Number of outgoing edges: 1

Vertex: 2 Number of incoming edges: 0 Number of outgoing edges: 1

# Graded files

The only files that will be submitted for grading on this problem is **adjacency_matrix.cpp**
