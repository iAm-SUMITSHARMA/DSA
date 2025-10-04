#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << &arr << endl; // 0x61fefc
    // OR
    //  cout << arr << endl;           // 0x61fefc  -> ALSO GIVE ADDRESS OF THE ARRAY...
    cout << &arr[0] << endl; // 0x61fefc
    cout << &arr[1] << endl; // 0x61ff00
    cout << &arr[2] << endl; // 0x61ff04
    cout << &arr[3] << endl; // 0x61ff08
    cout << &arr[4] << endl; // 0x61ff0c

    // DHYAAN SE DEKHE TO 4 BYTES AAGE SAARE GAYE HAI;;;;;;;;;;;
}