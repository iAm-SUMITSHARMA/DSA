#include <iostream>
#include <climits>
using namespace std;
int maxProfit(int *prices, int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for (int i = 1; i < n; i++) // TIME COMPLEXITY OF THIS LOOP : O(n)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
        // cout << bestBuy[i] << " ";
    }
    int maxProfit = 0;
    for (size_t i = 1; i < n; i++) // TIME COMPLEXITY OF THIS LOOP : O(n)
    {
        int currProfit = (prices[i] - bestBuy[i]);
        maxProfit = max(maxProfit, currProfit);
    }
    // FINAL TIME COMPLEXITY : O(n + n) = O(2n) = O(n)[Because we ignore the constants]
    if (maxProfit > 0)
        cout << maxProfit << endl;
    else
        cout << "maxProfit = 0";
}
int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);

    return 0;
}