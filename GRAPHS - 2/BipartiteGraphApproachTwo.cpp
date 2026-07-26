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

    // APPROACH 2:
    // checking bipartite----

    // if Acyclic (no cycle) -> TRUE
    // if Even Cycle -> TRUE
    // if Odd Cycle -> FALSE

    bool ifAcyclic(int u, vector<bool> &visited)
    {
        visited[u] = true;
        list<int> neighbours = l[u];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                if (ifAcyclic(v, visited))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool checkBipartite()
    {
        vector<bool> visited(V, false);
        queue<int> q;
        q.push(0);
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            if(ifAcyclic(u, visited)){
                return true;
            }
            else{
                
            }
        }
    }
};
int main()
{
    // undirected , bipartite graph:
    Graph graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    // graph.addEdge(0, 3);

    graph.print();

    cout << graph.checkBipartite() << endl;
    return 0;
}