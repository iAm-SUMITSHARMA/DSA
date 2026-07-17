#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop()
    {
        if (empty())
        {
            cout << "Queue is empty.." << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    int front()
    {
        if (empty())
        {
            cout << "Queue is empty.." << endl;
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        return head == NULL; // if head == NULL return true;
    }
};
int main()
{
    // using linkedlist (FIFO)
    // while using linkedlist:
    // 1. push() -> push_back in LinkedList
    // 2. pop() -> pop_front in LinkedList
    // 3. front() -> return head of LinkedList

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}