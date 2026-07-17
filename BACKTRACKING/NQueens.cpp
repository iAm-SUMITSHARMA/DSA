/// Q!n. Place N queens on an NxN chessboard such that no 2 queens can attack each other
// N = 4

// TIME COMPLEXITY: O(n!)
// SPACE COMPLEXITY: O(nxn)

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printBoard(vector<vector<char>> board)
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
    cout << "-------------" << endl;
}
bool isSafe(vector<vector<char>> board, int row, int col)
{
    // HORIZONTAL SAFETY
    for (int j = 0; j < board.size(); j++)
    {
        if (board[row][j] == 'Q')
            return false;
    }
    // VERTICAL SAFETY
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }
    // DIAGONAL LEFT SAFETY
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    // DIAGONAL RIGHT SAFETY
    for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}
void NQueens(vector<vector<char>> board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printBoard(board);
        return;
    }
    for (int j = 0; j < n; j++) // columns
    {
        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q'; // Place Queen
            NQueens(board, row + 1);
            board[row][j] = '.'; // Backtrack
        }
    }
}
int main()
{
    vector<vector<char>> board;
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    NQueens(board, 0);
    return 0;
}
