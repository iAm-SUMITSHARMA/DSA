#include <iostream>
using namespace std;
void printSubArr(int *ptr, int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout<<ptr[i];
            }
            cout<<",";
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printSubArr(arr, n);
}