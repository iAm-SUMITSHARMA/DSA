#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    bool isUndirected;

public:
    Graph(int V, bool isUndirected = true)
    {
        this->V = V;
        l = new list<int>[V];
        this->isUndirected = isUndirected; // if isUndirected false then it becomes false ........
    }

    void addEdge(int u, int v) // u----->v
    {
        l[u].push_back(v); // adding v in u neighbors
        if (isUndirected)
        {
            l[v].push_back(u); // adding v in u neighbors
        }
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

    // Cycle condition in directed graph:
    // node(v) -> visited + present in recursive path
    bool isCycleDirectedHelper(int src, vector<bool> &visited, vector<bool> &recPath) // TC: O(V+E)
    {
        visited[src] = true;
        recPath[src] = true;

        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                if (isCycleDirectedHelper(v, visited, recPath))
                {
                    return true;
                }
            }
            else
            {
                if (recPath[v])
                {
                    return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }

    bool isCycleDirected()
    {
        vector<bool> visited(V, false);
        vector<bool> recPath(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (isCycleDirectedHelper(0, visited, recPath))
                {
                    return true;
                };
            }
        }
        return false;
    }
};
int main()
{
    int V = 4;
    Graph graph(V, false); // made a directed graaph
    graph.addEdge(1, 0);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 0); // cycle exist because of this edge...

    graph.print();

    cout << graph.isCycleDirected() << endl;
    return 0;
}