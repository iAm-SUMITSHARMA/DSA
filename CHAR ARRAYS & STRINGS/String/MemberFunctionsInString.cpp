#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello sumit! how are you? how do you do?";
    cout << str.length() << endl;
    cout << str[6] << endl;
    cout << str.at(6) << endl;
    cout<<str.substr(3,8)<<endl; // sub str = subString
    cout<<str.find("how", 15)<<endl;
    cout<<str.find("umit")<<endl;
    int idx = str.find("python"); // if the word is not present in the string it will return -1
    cout<<idx<<endl;
    return 0;
}
