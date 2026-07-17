// Question- INDIAN COINS
// We are given an infinite supply of denominations [1,2,5,10,20,50,100,500,2000].
// Find min no. of coins to make change for a value V.
// V = 121
// ans = 3(100 + 20 +1)
// V = 590
// ans = 4(600 + 50 + 20 + 20)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// TC : O(n) , if already sorted
// TC : O(nlogn) , if not sorted 
int minNumberOfCoins(vector<int> coins, int V)
{
    // sort(coins.begin(), coins.end()); // if not sorted
    int n = coins.size();
    int count = 0;
    for (int i = n - 1; i >= 0 && V > 0; i--)
    {
        if (V >= coins[i])
        {
            count += V / coins[i];
            V %= coins[i];
        }
    }
    return count;
}
int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int V = 1099;
    // int V = 590;
    // int V = 591;
    // int V = 121;
    // int V = 1100;
    // int V = 2000;
    cout << minNumberOfCoins(coins, V);
}