#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void maxSubProduct(int *arr, int n)
{
    int maxProduct = 1;
    for (int start = 0; start < n; start++)
    {
        int product = 1;
        for (int i = 0; i < n; i++)
        {
            product *= arr[i];
            cout << product << " ";
            maxProduct = max(maxProduct, product);
            if (arr[i] <= 0)
            {
                product = 1;
            }
        }
        cout << endl;
    }
    cout<<"maxProduct: " <<maxProduct;
}
int main()
{
    int arr[] = {11, 2, 3, 4, 0, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    maxSubProduct(arr, n);
}