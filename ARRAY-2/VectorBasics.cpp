#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // You need not mention the size
    // IN STARTING -- For inserting or input do not use- []
    v.push_back(6);
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;
    v.push_back(4);
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;
    v.push_back(0);
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl;
    // if you want to update or access the elements then you can use this......
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << endl;
    // for updating =====
    v[0] = 9;
    v[1] = 7;
    v[2] = 5;
    v[3] = 4;
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << endl;
}