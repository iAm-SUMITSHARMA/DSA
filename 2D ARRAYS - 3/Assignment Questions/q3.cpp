// Question 3 : Write a program to Find Transpose of a Matrix.
// What is Transpose?
// Transpose of a matrix is the process of swapping the rows to columns. For a 2x3
// matrix,
// Matrix
// a11 a12 a13
// a21 a22 a23
// Transposed Matrix
// a11 a21
// a12 a22
// a13 a23

#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {{4, 7, 8}, {8, 8, 7}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[j][i] << " ";
        }
        cout<<endl;
    }
}