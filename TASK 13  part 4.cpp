#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Graph {
public:
    unordered_map<int, vector<int>> adj;

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // For **undirected** graph
    }
};
#include <unordered_set>

void BFS(int startNode, Graph& graph) {
    unordered_set<int> visited;
    queue<int> q;

    visited.insert(startNode);
    q.push(startNode);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : graph.adj[node]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
}
int main() {
    Graph graph;
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(2, 5);
    graph.addEdge(3, 6);
    graph.addEdge(3, 7);

    cout << "BFS Traversal: ";
    BFS(1, graph);
    cout << endl;

    return 0;
}