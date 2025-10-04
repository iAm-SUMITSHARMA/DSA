// QN. WAF to find first occurrence of an element in a vector...
// let vector = [1,2,3,3,3,4] , target = 3
// answer = index 2

#include <iostream>
#include <vector>
using namespace std;
// int findFirstOcc(vector<int> vec, int target, int i)
// {
//     if (i == vec.size()) // base case
//     {
//         return -1;
//     }
//     if (vec[i] == target)
//     {
//         return i;
//     }
//     return findFirstOcc(vec, target, i + 1);
// }

int findFirstOcc(vector<int> vec, int target, int i)
{
    if (i == vec.size())
        return -1;
    if (vec[i] == target)
        return i;
    return findFirstOcc(vec, target, i + 1);
}
int main()
{
    vector<int> vec = {1, 2, 3, 3, 3, 4};
    cout << findFirstOcc(vec, 5, 0) << endl;
    return 0;
}