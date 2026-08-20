//Time Complexity :  O(m × n)
//Space Complexity :  O(m × n)

// BFS APPROACH: 
// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
//                                   int color) {
//         int m = image.size();
//         int n = image[0].size();
//         int originalColor = image[sr][sc];
//         vector<vector<bool>> visited(m, vector<bool>(n, false));
//         queue<pair<int, int>> q;
//         q.push(make_pair(sr, sc));
//         visited[sr][sc] = true;
//         while (!q.empty()) {
//             int i = q.front().first;
//             int j = q.front().second;
//             q.pop();
//             image[i][j] = color;
//             if (i - 1 >= 0 && !visited[i - 1][j] &&
//                 image[i - 1][j] == originalColor) {
//                 visited[i - 1][j] = true;
//                 q.push(make_pair(i - 1, j));
//             }
//             if (i + 1 < m && !visited[i + 1][j] &&
//                 image[i + 1][j] == originalColor) {
//                 visited[i + 1][j] = true;
//                 q.push(make_pair(i + 1, j));
//             }
//             if (j - 1 >= 0 && !visited[i][j - 1] &&
//                 image[i][j - 1] == originalColor) {
//                 visited[i][j - 1] = true;
//                 q.push(make_pair(i, j - 1));
//             }
//             if (j + 1 < n && !visited[i][j + 1] &&
//                 image[i][j + 1] == originalColor) {
//                 visited[i][j + 1] = true;
//                 q.push(make_pair(i, j + 1));
//             }
//         }
//         return image;
//     }
// };


// DFS APPROACH: 
// class Solution {
// public:
//     void dfs(vector<vector<int>>& image, int i, int j, int color,
//              int originalColor, vector<vector<bool>>& visited) {
//         int m = image.size();
//         int n = image[0].size();
//         visited[i][j] = true;
//         image[i][j] = color;
//         if (i - 1 >= 0 && !visited[i - 1][j] &&
//             image[i - 1][j] == originalColor) {
//             dfs(image, i - 1, j, color, originalColor, visited);
//         }
//         if (i + 1 < m && !visited[i + 1][j] &&
//             image[i + 1][j] == originalColor) {
//             dfs(image, i + 1, j, color, originalColor, visited);
//         }
//         if (j - 1 >= 0 && !visited[i][j - 1] &&
//             image[i][j - 1] == originalColor) {
//             dfs(image, i, j - 1, color, originalColor, visited);
//         }
//         if (j + 1 <n && !visited[i][j + 1] &&
//             image[i][j + 1] == originalColor) {
//             dfs(image, i, j + 1, color, originalColor, visited);
//         }
//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
//                                   int color) {
//         int originalColor = image[sr][sc];
//         int m = image.size();
//         int n = image[0].size();
//         vector<vector<bool>> visited(m, vector<bool>(n, false));
//         dfs(image, sr, sc, color, originalColor, visited);
//         return image;
//     }
// };