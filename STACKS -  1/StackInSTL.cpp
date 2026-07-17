#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
// create stack using LINKEDLIST:
template <class T>
class Node
{
public:
    T data;
    Node *next;

    Node(T val)
    {
        data = val;
        next = NULL;
    }
};
template <class T>
class Stack
{
    Node<T> *head;

public:
    Stack() { head = NULL; }
    void push(T val) // -> push_front
    {
        Node<T> *newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }
    void pop() // -> pop_front
    {
        Node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    T top()
    {
        return head->data;
    }
    bool isEmpty() // classes wlaa empty
    {
        return head == NULL;
    }
};
int main()
{
    // STL -> stack :
    stack<int> s;

    // STL -> stack : start with smalls but classes wlaa Stack will start with capital S .... Here is our classes wlaa stack: Stack

    // Stack<int> s; // class wlaa Stack
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Printing stack: " << endl;
    while (!s.empty()) // stl wale stack me bas empty hota hai..
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}