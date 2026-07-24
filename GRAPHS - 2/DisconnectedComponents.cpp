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

    void dfsHelper(int u, vector<bool> &visited) // O(V+E)
    {
        visited[u] = true;
        cout << u << " ";
        list<int> neighbours = l[u];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                dfsHelper(v, visited);
            }
        }
    }
    void dfs()
    {
        vector<bool> visited(7, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                dfsHelper(i, visited); // starting point = ith node
            }
        }
        cout << endl;
    }

    void bfsHelper(int i, vector<bool> &visited) // O(V+E)
    {
        queue<int> q;
        q.push(i);
        visited[i] = true;
        while (q.size() > 0)
        {
            int u = q.front(); // current element you can say
            q.pop();
            cout << u << " ";

            list<int> neighbours = l[u]; // u----v
            for (int v : neighbours)
            {
                if (!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void bfs()
    {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                bfsHelper(i, visited);
            }
        }
        cout << endl;
    }
};
int main()
{
    Graph graph(10);
    // undirected graph
    graph.addEdge(1, 6);
    graph.addEdge(6, 4);
    graph.addEdge(4, 3);
    graph.addEdge(4, 9);
    graph.addEdge(3, 7);
    graph.addEdge(3, 8);

    graph.addEdge(2, 0);
    graph.addEdge(2, 5);

    graph.print();

    graph.dfs();
    graph.bfs();
    return 0;
}