#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Graph {
public:
    unordered_map<int, vector<int>> adj;

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // For **undirected** graph
    }
};
int main() {
    Graph graph;
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(2, 5);
    graph.addEdge(3, 6);
    graph.addEdge(3, 7);

    unordered_set<int> visited;
    cout << "DFS Traversal: ";
    DFS(1, visited, graph);
    cout << endl;

    return 0;
}