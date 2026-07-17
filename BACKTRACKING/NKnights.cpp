/// Q!n. Place N knights on an NxN chessboard such that no 2 knights can't attack each other
// N = 4
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printKnights(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------" << endl;
}
bool isSafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    // Check all 8 knight moves:

    // Row Upper for both left and right:
    if (row - 2 >= 0 && col - 1 >= 0 && board[row - 2][col - 1] == 'G')
        return false; // left
    if (row - 2 >= 0 && col + 1 < n && board[row - 2][col + 1] == 'G')
        return false; // right

    // Row Lower for both left and right:
    if (row + 2 < n && col - 1 >= 0 && board[row + 2][col - 1] == 'G')
        return false; // left
    if (row + 2 < n && col + 1 < n && board[row + 2][col + 1] == 'G')
        return false; // right

    // Col Left for both up and down:
    if (row - 1 >= 0 && col - 2 >= 0 && board[row - 1][col - 2] == 'G')
        return false; // up
    if (row + 1 < n && col - 2 >= 0 && board[row + 1][col - 2] == 'G')
        return false; // down

    // Col right for both up and down:
    if (row - 1 >= 0 && col + 2 < n && board[row - 1][col + 2] == 'G')
        return false; // up
    if (row + 1 < n && col + 2 < n && board[row + 1][col + 2] == 'G')
        return false; // down

    return true;
}
void NKnights(vector<vector<char>> board, int row)
{
    if (row == board.size())
    {
        printKnights(board);
        return;
    }
    for (int j = 0; j < board.size(); j++) // columns
    {
        if (isSafe(board, row, j))
        {
            board[row][j] = 'G'; // Place knight
            NKnights(board, row + 1);
            board[row][j] = '.'; // Backtrack
        }
    }
}
int main()
{
    vector<vector<char>> board;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    NKnights(board, 0);
    return 0;
}
