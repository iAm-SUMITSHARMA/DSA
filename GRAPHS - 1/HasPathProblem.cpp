// QUESTION: HasPath Problem
// Tell if path exists from *src* to *destination*.
// src = 0, dest = 5

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

    // By DFS=====>>

    // bool hasPathHelper(int src, int dest, vector<bool> &visited)
    // {
    //     if (src == dest)
    //         return true;

    //     visited[src] = true;
    //     list<int> neighbours = l[src];
    //     for (int v : neighbours)
    //     {
    //         if (!visited[v])
    //         {
    //             if (hasPathHelper(v, dest, visited))
    //             {
    //                 return true;
    //             };
    //         }
    //     }
    //     return false;
    // }

    // By BFS   ====>>>

    bool hasPathHelper(int src, int dest, vector<bool> &visited)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();
            list<int> neighbours = l[u];
            for (int v : neighbours)
            {
                if (v == dest)
                    return true;
                if (!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }

        return false;
    }
    bool hasPath()
    {
        vector<bool> visited(V, false);
        return hasPathHelper(0, 5, visited);
    }
};
int main()
{
    Graph graph(7);
    // undirected graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);

    graph.print();

    cout << graph.hasPath() << endl;
    return 0;
}