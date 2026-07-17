#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int capacity; // total size of the array
    int currSize; // total number of elements present in the array

    int f, r; // front and rear
public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;

        f = 0;
        r = -1;
    }
    void push(int val)
    {
        if (currSize == capacity)
        {
            cout << "Queue is full..." << endl;
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = val;
        currSize++;
    }
    void pop()
    {
        if (empty())
        {
            cout << "Queue is empty.." << endl;
            return;
        }
        f = (f + 1) % capacity;
        currSize--;
    }
    int front()
    {
        if (empty())
        {
            cout << "Queue is empty.." << endl;
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        return currSize == 0; // if currSize == 0 return true;
    }
    void printRear()
    {
        cout << arr[r] << endl;
    }
};
int main()
{
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5); // Queue is full...

    cout << q.front() << endl; // 1
    q.pop();

    cout << q.front() << endl; // 2
    q.push(16);
    cout << q.front() << endl; // 2 : because front shifted to 2 and its still on 2

    q.printRear(); // 16
    return 0;
}