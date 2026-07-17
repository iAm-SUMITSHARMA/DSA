#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(9);
    pq.push(7);
    pq.push(3);
    pq.push(8);
    cout<<"pq in decsending order: "<<endl;
    while (!pq.empty())
    {
        cout << "Top: " << pq.top() << endl;
        pq.pop();
    }
    
    // min heap -> ascending order
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(10);
    pq2.push(9);
    pq2.push(7);
    pq2.push(3);
    pq2.push(8);
    cout<<"pq in ascending order: "<<endl;
    while (!pq2.empty())
    {
        cout << "Top: " << pq2.top() << endl;
        pq2.pop();
    }
    
    // min heap -> ascending order
    priority_queue<string, vector<string>, greater<string>> pq3;
    pq3.push("helloworld");
    pq3.push("apnacollege");
    pq3.push("cpo");
    pq3.push("i");
    pq3.push("am");
    pq3.push("sumit");
    cout<<"string pq in ascending order: "<<endl;
    while (!pq3.empty())
    {
        cout << "Top: " << pq3.top() << endl;
        pq3.pop();
    }

    // max heap -> descending order
    priority_queue<string> pq4;
    pq4.push("helloworld");
    pq4.push("apnacollege");
    pq4.push("cpo");
    pq4.push("i");
    pq4.push("am");
    pq4.push("sumit");
    cout<<"string pq in descending order: "<<endl;
    while (!pq4.empty())
    {
        cout << "Top: " << pq4.top() << endl;
        pq4.pop();
    }
}