// QUESTION NUMBER - 210 COURSE SCHEDULE - II ON LEETCODE


// TC : O(V x E)
class Solution {
public:
    bool isCycle(int src, vector<bool>& visited, vector<bool>& recPath,
                 vector<vector<int>>& graph) {
        int n = graph.size();
        visited[src] = true;
        recPath[src] = true;
        for (int i = 0; i < n; i++) {
            int u = graph[i][1];
            int v = graph[i][0];

            if (u == src) {
                if (!visited[v]) {
                    if (isCycle(v, visited, recPath, graph)) {
                        return true;
                    }
                } else {
                    if (recPath[v])
                        return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }
    void topoSort(int src, vector<bool>& visited2, stack<int>& s,
                  vector<vector<int>>& graph) {
        int n = graph.size();
        visited2[src] = true;
        for (int i = 0; i < n; i++) {
            int u = graph[i][1];
            int v = graph[i][0];
            if (src == u) {
                if (!visited2[v]) {
                    topoSort(v, visited2, s, graph);
                }
            }
        }
        s.push(src);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& graph) {
        int V = numCourses;
        vector<bool> visited(V, false);
        vector<bool> recPath(V, false);
        vector<int> ans;
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (isCycle(i, visited, recPath, graph)) {
                    return ans;
                }
            }
        }
        vector<bool> visited2(V, false);
        stack<int> s;
        for (int i = 0; i < V; i++) {
            if (!visited2[i]) {
                topoSort(i, visited2, s, graph);
            }
        }
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};