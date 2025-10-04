#include <iostream>
using namespace std;
// Write a function to find out the first and last digit of a number without returning anything.

void calculateBuddy(int *ptrN, int *ptrFD, int *ptrLD)
{
    *ptrLD = *ptrN % 10;
    while (*ptrN > 9)
    {
        *ptrN = *ptrN / 10;
    }
    *ptrFD = *ptrN;
    return;
}
int main()
{
    int n;
    cout << "Enter any number buddy :";
    cin >> n;
    int store = n;
    int fd;
    int ld;
    int *ptrN = &n;
    int *ptrFD = &fd;
    int *ptrLD = &ld;
    calculateBuddy(ptrN, ptrFD, ptrLD);
    cout << "First Digit of " << store << " is : " << *ptrFD << endl;
    cout << "Last Digit of " << store << " is : " << *ptrLD << endl;
}