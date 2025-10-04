// Question 2 : You are given an integer array height of length n. There are n vertical
// lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container
// contains the most water. Return the maximum amount of water a container can
// store.
// Notice that you may not slant the container. [ Go to Qs ]
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this
// case, the max area of water (blue section) the container can contain is 49.
#include <iostream>
#include <vector>
using namespace std;
int mxWater(vector<int> &height)
{
    int mxWater = 0;
    int start = 0, end = height.size() - 1;
    while (start < end)
    {
        int currWater = min(height[start], height[end]) * (end - start);
        mxWater = max(mxWater, currWater);
        if (height[start] < height[end])
        {
            start++;
        }
        else if (height[start] > height[end])
        {
            end--;
        }
        else
        {
            // If both heights are equal, move either pointer (moving both is also fine)
            start++;
            end--;
        }
    }
    return mxWater;
}
int main()
{
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << mxWater(height);
    return 0;
}
