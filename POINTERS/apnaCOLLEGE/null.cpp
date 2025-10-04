#include <iostream>
using namespace std;
int main()
{
    int *ptr = NULL;
    cout << ptr << endl;
    cout << *ptr << endl; // SEGMENTATIOIN FAULT
    cout << " byre " << endl;

    return 0;
}