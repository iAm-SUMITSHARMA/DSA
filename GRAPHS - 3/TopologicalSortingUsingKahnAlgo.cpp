#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <list>
#include <stack>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    bool isUndir;

public:
    Graph(int V, bool isUndir = true)
    {
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v)
    { // u--->v
        l[u].push_back(v);
        if (isUndir)
        {
            l[v].push_back(u);
        }
    }

    // DFS APPROACH
    void topoHelper(int src, vector<bool> &visited, stack<int> &s) // dfs- O(V+E)
    {
        visited[src] = true;
        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                topoHelper(v, visited, s);
            }
        }
        s.push(src);
    }
    void topoSort()
    {
        vector<bool> visited(V, false);
        stack<int> s;

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                topoHelper(i, visited, s);
            }
        }

        // print topological order:
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
    void calcIndegree(vector<int> &indeg)
    {
        for (int u = 0; u < V; u++)
        {
            list<int> neighbours = l[u];
            for (int v : neighbours)
            { // u->v
                indeg[v]++;
            }
        }
    }
    void topoSort2() // kahn's algorithm
    {
        vector<int> indeg(V, 0);
        calcIndegree(indeg);

        queue<int> q;
        // find -> 0 indeg nodes -> they are starting point
        for (int i = 0; i < V; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            list<int> neighbours = l[curr];
            for (int v : neighbours)
            {
                indeg[v]--;
                if (indeg[v] == 0) // no pending dependencies
                {
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
};
int main()
{
    // Directed Acyclic Graphs (DAG)
    Graph graph(6, false);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);

    graph.addEdge(4, 0);
    graph.addEdge(4, 1);

    graph.addEdge(5, 0);
    graph.addEdge(5, 2);

    graph.topoSort2();
}