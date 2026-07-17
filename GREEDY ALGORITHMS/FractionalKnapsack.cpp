// Question- Put items in knapsack to get the *maximum total value* in the knapsack.
// value = [60,100,120]
// weight = [10,20,30]
// W = 50
// ans = 240

// NOTE: This question(Fractional Knapsack is of greedy) and 0-1 Knapsack is of DP..
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<double,int>p1, pair<double, int>p2){
    return p1.first>p2.first; // descending order based on ratio
}
int fractionKnapsack(vector<int> val, vector<int> wt, int W){
    int n= val.size();
    vector<pair<double, int>>ratio(n, make_pair(0.0, 0));
    for(int i = 0 ; i<n; i++){
        double r = val[i] / (double)wt[i];
        ratio[i]  = make_pair(r,i);
    }
    sort(ratio.begin(), ratio.end(), compare); // O(nlogn)

    int ans = 0;
    for(int i = 0; i<n;i++){
        int idx = ratio[i].second;
        if(wt[idx] <= W){
            ans += val[idx] ;
            W -= wt[idx];
        }
        else{
            ans += ratio[i].first * W;
            W= 0;
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> value = {60,100, 120};
    vector<int> weight = {10,20,30};
    int W = 50;
    cout<<fractionKnapsack(value, weight, W);
}