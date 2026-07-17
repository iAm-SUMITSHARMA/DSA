#include <iostream>
#include <deque>
using namespace std;
// Deque in C++ = Double Ended Queue.
// where De stands for Double Ended... And queue stands for queue
int main()
{
    deque<int> deq;
    deq.push_front(2);
    deq.push_front(1);
    deq.push_back(3);
    deq.push_back(4);
    deq.pop_front();
    deq.pop_back();
    cout << deq.front() << " ";
    cout << deq.back() << " ";
    return 0;
}