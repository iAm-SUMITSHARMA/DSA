/// Q!n. SOLVE SUDOKU
// TIME COMPLEXITY: O(n!)
// SPACE COMPLEXITY: O(nxn)

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printSudoku(int sudoku[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
}
bool isSafe(int sudoku[9][9], int row, int column, int i)
{
    // Vertical check
    for (int k = 0; k <= 8; k++)
    {
        if (sudoku[k][column] == i)
        {
            return false;
        }
    }
    // Horizontal check
    for (int j = 0; j <= 8; j++)
    {
        if (sudoku[row][j] == i)
        {
            return false;
        }
    }
    // 3 x 3 grid condition
    int startRow = (row / 3) * 3;
    int startColumn = (column / 3) * 3;

    for (int k = startRow; k <= startRow + 2; k++)
    {
        for (int j = startColumn; j <= startColumn + 2; j++)
        {
            if (sudoku[k][j] == i)
                return false;
        }
    }

    return true;
}
bool sudokuSolution(int sudoku[9][9], int row, int column)
{
    if (row == 9)
    {
        printSudoku(sudoku);
        return true;
    }

    int nextRow = row;
    int nextCol = column + 1;
    if (column + 1 == 9)
    {
        nextRow = row + 1;
        nextCol = 0;
    }
    if (sudoku[row][column] != 0)
    {
        return sudokuSolution(sudoku, nextRow, nextCol);
    }
    for (int i = 1; i <= 9; i++)
    {
        if (isSafe(sudoku, row, column, i))
        {
            sudoku[row][column] = i;
            if (sudokuSolution(sudoku, nextRow, nextCol))
            {
                return true;
                // If recursion returns true,
                // it means the remaining Sudoku has been solved successfully.
                // Therefore, the current choice is also correct,
                // and we immediately return true.

                // If recursion returns false,
                // execution does NOT enter this block.
                // We backtrack by removing the current digit
                // and try the next possible digit.
            };
            sudoku[row][column] = 0;
        }
    }
    return false;
}
int main()
{
    int sudoku[9][9] = {
        {0, 0, 8, 0, 0, 0, 0, 0, 0},
        {4, 9, 0, 1, 5, 7, 0, 0, 2},
        {0, 0, 3, 0, 0, 4, 1, 9, 0},
        {1, 8, 5, 0, 6, 0, 0, 2, 0},
        {0, 0, 0, 0, 2, 0, 0, 6, 0},
        {9, 6, 0, 4, 0, 5, 3, 0, 0},
        {0, 3, 0, 0, 7, 2, 0, 0, 4},
        {0, 4, 9, 0, 3, 0, 0, 5, 7},
        {8, 2, 7, 0, 0, 9, 0, 1, 3}};
    sudokuSolution(sudoku, 0, 0);
    return 0;
}
