// Question: 787 - Cheapest Flights Within K Stops
// flights = [from, to, price] 
// src = 0, dst = 2, k = 1
//-------------------------------------------

// TC: O(k * E), number of queue states × number of flights

// SC: O(n + number of queued states) and in the worst case can be larger than O(n).

//-------------------------------------------
// class Info {
// public:
//     int u;
//     int cost;
//     int stop;
//     Info(int u, int cost, int stop) {
//         this->u = u;
//         this->cost = cost;
//         this->stop = stop;
//     }
// };
// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
//                           int k) {
//         vector<int> dist(n, INT_MAX);
//         dist[src] = 0;
//         queue<Info> q;
//         q.push(Info(src, dist[src], -1));
//         while (!q.empty()) {
//             Info curr = q.front();
//             q.pop();
//             for (int i = 0; i < flights.size(); i++) {
//                 if (flights[i][0] == curr.u) {
//                     int v = flights[i][1];
//                     int wt = flights[i][2];

//                     if (dist[v] > wt + curr.cost && curr.stop < k) {
//                         dist[v] = wt + curr.cost;
//                         q.push(Info(v, dist[v], curr.stop + 1));
//                     }
//                 }
//             }
//         }

//         return dist[dst] == INT_MAX ? -1 : dist[dst];
//     }
// };

