#include <iostream>
#include <vector>
using namespace std;
class DisjointSet
{
public:
    int n;
    vector<int> par;
    vector<int> rank;

    DisjointSet(int n)
    {
        this->n = n;
        for (int i = 0; i < n; i++)
        {
            par.push_back(i);
            rank.push_back(0);
        }
    }

    int find(int x) // TC: O(C)- CONSTANT
    {
        if (par[x] == x)
            return x;
        // return find(par[x]);
        return par[x] = find(par[x]); // path compression
    }
    // Path Compression

    // Purpose: Path compression makes future find() operations faster by making every visited node point directly to the root.

    //     Why is it important?
    // Prevents long parent chains.
    // Flattens the DSU tree.
    // Makes future find() operations much faster.
    // Works together with Union by Rank/Size to make DSU extremely efficient.

    // Complexity with Path Compression + Union by Rank/Size:
    // Amortized O(α(V)) ≈ O(1) per operation.

    // Easy way to remember:

    // Path Compression = Find the root → directly connect the node to the root.

    // Without Path Compression : TC - O(logV)
    void unionByRank(int a, int b) // TC: O(C)- CONSTANT
    {
        int parA = find(a);
        int parB = find(b);
        if (rank[parA] == rank[parB])
        {
            par[parB] = parA;
            rank[parA]++;
        }
        else if (rank[parA] > rank[parB])
        {
            par[parB] = parA;
        }
        else
        {
            par[parA] = parB;
        }
    }

    void getInfo()
    {
        cout << "idx : " << "par ," << " rank" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i << ": " << par[i] << " , " << rank[i] << endl;
        }
    }
};

int main()
{
    DisjointSet dj(6);
    dj.unionByRank(0, 2);
    cout << dj.find(2) << endl;
    dj.unionByRank(1, 3);
    dj.unionByRank(2, 5);
    dj.unionByRank(0, 3);
    cout << dj.find(2) << endl;
    dj.unionByRank(0, 4);
    dj.getInfo();
}