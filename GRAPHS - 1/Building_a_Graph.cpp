#include <iostream>
#include <vector>
#include <list>
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
};
int main()
{
    Graph graph(5);
    // undirected graph
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);

    graph.print();
    return 0;
}



// HOMEWORK=======>>> lecture 6
// implement list<pair<int,int>>[V]
// for weighted-------...