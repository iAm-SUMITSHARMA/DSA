#include <iostream>
using namespace std;
void oddOrEven(int num)
{
    // if (!(num & 1)){
    if ((num & 1) == 0) // Here 1 is our bitmask...
    {
        cout << "The bit is even..." << endl;
    }
    else
        cout << "The bit is odd.." << endl;
}
int main()
{
    oddOrEven(5);
    oddOrEven(16);
}