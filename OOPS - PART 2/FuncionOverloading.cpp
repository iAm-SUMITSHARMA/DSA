#include<iostream>
#include<string>
using namespace std;
class Print {
    public:
    void show(int x){
        cout<<"int : "<<x<<endl;
    }
    void show(string str){
        cout<<"string : "<<str<<endl;
    }
};
int main(){
    Print obj1;
    obj1.show(253);
    obj1.show("sho");
    return 0;
}