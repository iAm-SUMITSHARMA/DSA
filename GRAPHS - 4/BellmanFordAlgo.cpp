#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Edge
{
public:
    int v;
    int wt;

    Edge(int v, int wt)
    {
        this->v = v;
        this->wt = wt;
    }
};
void bellmanFord(int src, vector<vector<Edge>> &graph, int V) // TC: O(V(V+E))
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    for (int i = 0; i < V - 1; i++) // This loop runs V times // V
    {
        for (int u = 0; u < V; u++) // This loop runs V times // V
        {
            // Skip unreachable vertices
            if (dist[u] == INT_MAX)
                continue;
            for (Edge e : graph[u]) // This loop runs E times // E
            {
                if (dist[e.v] > dist[u] + e.wt)
                {
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}
int main()
{
    int V = 5;
    vector<vector<Edge>> graph(V);
    graph[0].push_back(Edge(1, 2)); // vertex destination(v), weight(wt)
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, -4));

    graph[2].push_back(Edge(3, 2));

    graph[3].push_back(Edge(4, 4));

    graph[4].push_back(Edge(1, -1));

    bellmanFord(0, graph, V);
    bellmanFord(1, graph, V);
    bellmanFord(4, graph, V);
}