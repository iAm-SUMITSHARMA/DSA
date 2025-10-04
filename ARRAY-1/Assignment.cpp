// Produnt of all elements......
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Eenter the value of n: ";
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int multi = 1;
//     for(int i = 0; i<=n-1;i++){
// multi = multi * arr[i];
//     }
//     cout<<multi;
// }
// MINIMUM OF ALL.....
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Eenter the value of n: ";
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int min = arr[0];
//     for(int i = 0; i<=n-1;i++){
//         if(min>arr[i]){
//             min = arr[i];
//         }
//     }
//     cout<<min;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Eenter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 0; i<=n-1;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<min;
}
