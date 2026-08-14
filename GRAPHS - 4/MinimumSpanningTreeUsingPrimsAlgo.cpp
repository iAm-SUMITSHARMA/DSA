#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <climits>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<pair<int, int>> *l; // int, int: neighbour + wt
    bool isUndir;

public:
    Graph(int V, bool isUndir = true)
    {
        this->V = V;
        l = new list<pair<int, int>>[V];
        this->isUndir = isUndir;
    }

    void addEdge(int u, int v, int wt)
    {
        l[u].push_back(make_pair(v, wt)); // u---> v (weighted)
        if (isUndir)
            l[v].push_back(make_pair(u, wt)); // v---> u (weighted)
    }

    void primsAlgo(int src)
    {
        vector<bool> mst(V, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // wt->first, u->second.. so that it can be sort on the basis of cost.
        pq.push(make_pair(0, src));
        int ans = 0;
        while (pq.size() > 0)
        {
            int u = pq.top().second;
            int cost = pq.top().first;
            pq.pop();
            if (!mst[u])
            {
                mst[u] = true;
                ans += cost;
                list<pair<int, int>> neighbours = l[u];
                for (pair<int, int> v : neighbours)
                {
                    pq.push(make_pair(v.second, v.first));
                }
            }
        }
        cout << "Total minimum cost: " << ans << endl;
    }
};
int main()
{
    // Prim's Algo Graph
    Graph graph(4);
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 15);
    graph.addEdge(0, 3, 30);

    graph.addEdge(1, 3, 40);

    graph.addEdge(2, 3, 50);

    graph.primsAlgo(0);
    graph.primsAlgo(1);
    graph.primsAlgo(2);
    graph.primsAlgo(3);
}