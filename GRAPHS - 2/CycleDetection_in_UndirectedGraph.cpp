#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v)
    {                      // u---v
        l[u].push_back(v); // adding v in u neighbors
        l[v].push_back(u); // adding u in v neighbours
    }

    void print()
    {
        // l.size() = V
        for (int u = 0; u < V; u++)
        { // u = 0,1,2,3,4
            list<int> neighbours = l[u];
            cout << u << " : ";
            for (int v : neighbours)
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }

    // CYCLE DETECTION USING DFS

    bool isCycleUndirectedHelper(int src, int par, vector<bool> &visited) // TC: O(V+E)
    {
        visited[src] = true;

        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                if (isCycleUndirectedHelper(v, src, visited))
                {
                    return true;
                }
            }
            else
            {
                if (v != par) // cycle condition
                {
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycleUndirected()
    {
        vector<bool> visited(V, false);
        return isCycleUndirectedHelper(0, -1, visited);
    }
};
int main()
{
    int V = 5;
    Graph graph(V);
    // undirected graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2); // cycle formed because of this edge -> This edge is also called back edge
    graph.addEdge(0, 3);

    graph.addEdge(1, 2);

    graph.addEdge(3, 4);

    graph.print();

    cout << graph.isCycleUndirected() << endl;
    return 0;
}