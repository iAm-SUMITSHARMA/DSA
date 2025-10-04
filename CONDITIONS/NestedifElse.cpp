#include <iostream>
using namespace std;
int main()
{

    cout << "Entera positive integer :";
    int n;
    cin >> n;

    
    // ***********DIVIDED BY 5 OR 3 BUT NOT BY 15---

    // if ((n % 5 == 0 || n % 3 == 0) && (n % 15 != 0))
    // {
    //     cout << "The no. is divisible by 5 or 3 but not by 15";
    // }
    // else{
    //     cout << "NOT MATCHING THE CONDITION..";
    // }

    // *********DOING THE SAME QUESTION USING NESTED IF ELSE====

    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            cout << "The no. is divisible by 5 or 3 but not by 15";
        }
        else
        {
            cout << "NOT MATCHING THE CONDITION..";
        }
    }
}