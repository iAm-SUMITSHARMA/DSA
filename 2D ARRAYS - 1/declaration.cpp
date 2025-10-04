#include <iostream>
using namespace std;
int main()
{
    // int a[3][3];
    // cout << a[0][0] << " "; //  GARBAGE VALUE
    // cout << a[0][1] << " "; //  GARBAGE VALUE
    // a[0][0] = 4;
    // int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << a[1][2] << " ";
    // int a[][3] ; //WRONG WAY
    int a[][3] = {12, 34, 5, 26, 97, 89}; // CORRECT
    cout << a[1][2] << " ";
    // int a[2][] = {12, 34, 5, 26, 97, 89};   // THIS IS NOT VALID
    // COLUMN IS NECESSARY;
}