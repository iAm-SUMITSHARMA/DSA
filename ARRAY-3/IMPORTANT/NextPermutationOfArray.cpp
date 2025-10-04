#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void input(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}
void reverseG(vector<int> &a)
{
    int n = a.size();
    int j = n - 1; // ending index = j = n -1  // starting index = i = 0
    for (int i = 0; i < j; i++)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    return;
}
void swapPi(int p, vector<int> &a)
{
    int temp = a[p];
    a[p] = a[p + 1];
    a[p + 1] = temp;
    return;
}
void nextPerm(vector<int> &a)
{
    int n = a.size();
    // STEP -1 : finding pivot index
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--)
    { // 1 4 3 2
        if (a[i] < a[i + 1])
        {
            pivot = i;
            break;
        }
    }
    cout << "pivot = " << pivot << endl;
    if (pivot == -1) // if our vector /array is the largest of the all permutation
    {
        reverseG(a);
        return;
    }
    // STEP 2: SORTING/REVERSE AFTER PIVOT
    reverse(a.begin() + pivot + 1, a.end());
    // STEP 3: FIND JUST GREATER NUMBER THAN a[pivot] from a[pivot + 1 ] to [n-1]
    int tempo = -1;
    for (int i = pivot + 1; i < n; i++)
    {
        if (a[i] > a[pivot])
        {
            tempo = i;
            break;
        }
    }

    // STEP 4: swap a[pivot] and a[tempo]
    int temp = a[pivot];
    a[pivot] = a[tempo];
    a[tempo] = temp;
    return;
}
int main()
{
    int n;
    cout << "Enter the size of the vector:" << endl;
    cin >> n;
    vector<int> a(n);
    // INPUT==
    cout << "Enter any permutaion of the array:" << endl;
    input(a);
    cout << "Your array is:" << endl;
    display(a);
    nextPerm(a);
    cout << "Next Permutation of your array is:" << endl;
    display(a);
}