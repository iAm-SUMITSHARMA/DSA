#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec = {1, 2, 3, 4};
    vector<int> vec;
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.push_back(5);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.pop_back();
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    cout << endl;
}