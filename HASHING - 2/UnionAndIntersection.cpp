// QUESTION: UNIONSet & INTERSECTION

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
void unionSet(vector<int> nums, vector<int> nums2)
{
    unordered_set<int> k;
    for (auto x : nums)
    {
        k.insert(x);
    }
    for (auto x : nums2)
    {
        k.insert(x);
    }

    for (auto x : k)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << k.size()<<endl;
}
void intersectionSet(vector<int> nums, vector<int> nums2)
{
    unordered_set<int> k1;
    unordered_set<int> k2;
    for(auto x: nums){
        k1.insert(x);
    }
    for(auto x: nums2){
        k2.insert(x);
    }
    for(auto x: k1){
        if(k2.find(x) != k2.end()){
            cout<<x<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    vector<int> nums = {7, 3, 9};
    vector<int> nums2 = {6, 3, 9, 2, 9, 4};
    unionSet(nums, nums2);
    intersectionSet(nums, nums2);
}