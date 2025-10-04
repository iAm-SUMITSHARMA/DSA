#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<vector<int>> matrix = {{1, 2, 3}, {4, 5}, {7, 8, 9}}; // vectors of vector
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5,6}, {7, 8, 9}}; // vectors of vector
    for (int i = 0; i < matrix.size(); i++)
    {
        // matrix[i] -> ith row
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}