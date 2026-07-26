// QUESTIONS: ALL PATHS PROBLEM
// Print all paths from *src* to *dest* for a directed graph

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

    // solution : using dfs==>>
    void printPathUsingDFS(int src, int dest, vector<bool> &visited, string &path)
    {
        if (src == dest)
        {
            cout << path << dest << endl;
            return;
        }
        visited[src] = true;
        path += to_string(src); // one of the important part
        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                printPathUsingDFS(v, dest, visited, path);
            }
        }
        path = path.substr(0, path.size() - 1);
        visited[src] = false;
    }
    void allPathPrint(int src, int dest)
    {
        vector<bool> visited(V, false);
        string path = "";
        // for (int i = 0; i < V; i++)
        // {

        printPathUsingDFS(src, dest, visited, path);
        // }
    }
};
int main()
{
    // directed graph:
    Graph graph(6, false);
    graph.addEdge(0, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);

    graph.print();

    graph.allPathPrint(5, 1);
    return 0;
}