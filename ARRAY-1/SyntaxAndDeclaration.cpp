#include <iostream>
using namespace std;
int main()
{
    // int arr[7];           //DECLARATION
    // arr[0] = 747;         //initialisation = BEKAR WLAA
    // arr[1] = 7;
    // arr[2] = 65;
    // arr[3] = 44;
    // arr[4] = 49;
    // arr[5] = 78;
    // arr[6] = 796;

    int arr[7] = {1, 55, 6, 59, 75, 89, 528}; // DECLARATION WITH INITIALISATION-=========
                                              // OR
                                              // int arr[] = {1, 55, 6, 59, 75, 89, 528};
                                              // cout << arr[5];/

    // PRINTING EVERY ELEMENT - BY USING FOR LOOP
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
}