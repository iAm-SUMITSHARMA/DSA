#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"input string:"<<endl;
    // cin>>str;
    // getline(cin,str);
    getline(cin,str, '$');
    cout<<"string:"<<str<<endl;
    str = "yellow"; // this is not allowed in char array
    cout<<"string:"<<str<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
}