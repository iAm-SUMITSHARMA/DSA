// QN. WAF to find last occurrence of an element in a vector...
// let vector = [1,2,3,3,3,4] , target = 3
// answer = index 4

#include <iostream>
#include <vector>
using namespace std;
// SELF
// int findLastOcc(vector<int> vec, int target, int i)
// {
//     if (i < 0) // base case
//     {
//         return -1;
//     }
//     if (vec[i] == target)
//     {
//         return i;
//     }
//     return findLastOcc(vec, target, i - 1);
// }

// by SHRADDHA KHAPRA====
// int findLastOcc(vector<int> vec, int target, int i)
// {
//     if (i == vec.size())
//     {
//         return -1;
//     }
//     int idxFound = findLastOcc(vec, target, i + 1);
//     if (idxFound == -1 && vec[i] == target)
//     {
//         return i;
//     }
//     return idxFound;
// }

int findLastOcc(vector<int> vec, int target, int i)
{
    if (i == -1)
        return -1;
    if (vec[i] == target)
        return i;
    return findLastOcc(vec, target, i - 1);
}
int main()
{
    vector<int> vec = {1, 2, 3, 3, 3, 4};
    cout << findLastOcc(vec, 3, vec.size() - 1) << endl;
    return 0;
}