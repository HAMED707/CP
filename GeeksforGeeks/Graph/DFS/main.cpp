#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int vertices;
    vector<vector<int>> adjacencyList;
    
    void dfsUtil(int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        cout << vertex << " ";
        
        for (int neighbor : adjacencyList[vertex]) {
            if (!visited[neighbor]) {
                dfsUtil(neighbor, visited);
            }
        }
    }
    
public:
    Graph(int v) {
        vertices = v;
        adjacencyList.resize(v);
    }
    
    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
    }
    
    void dfs(int startVertex) {
        vector<bool> visited(vertices, false);
        cout << "DFS Traversal: ";
        dfsUtil(startVertex, visited);
        cout << endl;
    }
};

int main() {
    Graph g(5);
    
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    
    g.dfs(0);
    
    return 0;
}