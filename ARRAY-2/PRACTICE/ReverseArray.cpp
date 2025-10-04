#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1(8);
    // ANOTHER VECTOR:
    vector<int> v2(v1.size());
    // INPUT OF THE VECTOR v1......
    cout << "Enter your vector:";
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    // OUTPUT:  //1 3 2 4 3 4 1 6
    cout << "Okay we got it, your array v1 is : " << endl;
    display(v1);
    cout << "Reverse of your array is: " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        // int j = v1.size() - 1 - i;
        // v2[i] = v1[j];
        // v2[i] = v1.at(v1.size() - 1 - i);
        v2[i] = v1[v1.size() - 1 - i];
        cout << v2[i] << " ";
    }
    // reverse(v1.begin(), v1.end());
    // display(v1);
}