#include <iostream>
using namespace std;
// int *func()
// {

// }
int main()
{
    int rows;
    cout << "Enter your rows of matrix pointer : " << endl;
    cin >> rows;
    int columns;
    cout << "Enter your columns of matrix pointer : " << endl;
    cin >> columns;
    // int *arr = new int[size]; // normal integer array========
    int **matrix = new int *[rows]; // integer array of pointer========
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[columns];
    }
    // data store
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}