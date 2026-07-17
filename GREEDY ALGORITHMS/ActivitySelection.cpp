// Question on Leetcode called - maximum meetings in a room
// ACTIVITY SELECTION:
// Select the *max no. of activities* that can be performed by a single person.(a person can work on one activity at a time)
// start = [10,12,20]
// end = [20,25,30]
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    cout << "Selecting A0" << endl;
    int count = 1;
    int currEnd = end[0];
    for (int i = 1; i < start.size(); i++)
    {
        if (start[i] >= currEnd)
        {
            cout << "Selecting A" << i << endl;
            count++;
            currEnd = end[i];
        }
    }
    cout << count;
}