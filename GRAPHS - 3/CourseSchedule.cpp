// QUESTION NUMBER - 207 COURSE SCHEDULE ON LEETCODE


// TC : O(V x E)
class Solution {
public:
    bool isCycle(int src, vector<bool>& visited, vector<bool>& recPath,
                 vector<vector<int>>& graph) {
        visited[src] = true;
        recPath[src] = true;
        int n = graph.size();
        for (int i = 0; i < n; i++) {
            int u = graph[i][1];
            int v = graph[i][0];
            if (u == src) {
                if (!visited[v]) {
                    if (isCycle(v, visited, recPath, graph)) {
                        return true;
                    }
                } else {
                    if (recPath[v]) {
                        return true;
                    }
                }
            }
        }
        recPath[src] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<bool> visited(V, false);
        vector<bool> recPath(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (isCycle(i, visited, recPath, prerequisites)) {
                    return false;
                }
            }
        }
        return true;
    }
};