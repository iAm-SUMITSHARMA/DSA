#include <iostream>
#include <algorithm>
using namespace std;
bool checkDuplicate(int *nums, int n)
{
    sort(nums, nums + n); // sort the array first
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] == nums[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 2};
    int n = sizeof(nums) / sizeof(int);
    if (checkDuplicate(nums, n))
        cout << "Duplicates found!" << endl;
    else
        cout << "No duplicates!" << endl;
}