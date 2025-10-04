#include <iostream>
using namespace std;
// TIME COMPLEXITY OF BUBBLE SORT IS 0(n to the power 2)
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bbsort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        // cout<<"outer loops" <<endl;
        for (int j = 0; j < n - i - 1; j++)
        {
            // cout<<"inner loop"<<endl;
            // if (arr[j] < arr[j + 1]) // for descending
            if (arr[j] > arr[j + 1]) // for ascending
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        // if (isSwap == false){
        // array is already sorted;
        // return;
        // }
        if (!isSwap)
        {
            return;
        }
    }
}
int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(int);
    bbsort(arr, n);
    print(arr, n);
}