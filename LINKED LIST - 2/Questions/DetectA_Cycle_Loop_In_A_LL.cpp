#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    // void pop_front()
    // {
    //     if (head == NULL)
    //     {
    //         cout << "LL is empty" << endl;
    //         return;
    //     }
    //     Node *temp = head;
    //     head = head->next;
    //     temp->next = NULL;
    //     delete temp;
    // }
    // int push_back(int val)
    // {
    //     Node *newNode = new Node(val);
    //     Node *temp = head;
    //     while (temp->next != NULL)
    //     {
    //         temp = temp->next;
    //     }
    //     temp->next = newNode;
    // }
    // void pop_back()
    // {
    //     if (head == NULL)
    //         return; // empty  list
    //     Node *temp = head;
    //     while (temp->next->next != NULL)
    //     {
    //         temp = temp->next;
    //     }
    //     // temp->next is the last node
    //     Node *last = temp->next;
    //     temp->next = NULL;
    //     delete last;
    // }

    bool isCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;       // +1
            fast = fast->next->next; // +2
            if (slow == fast)
            {
                cout << "Cycle exists.." << endl;
                return true;
            }
        }
        cout << "Cycle does not exists.." << endl;
        return false;
    }
};
int main()
{
    // will solve with -
    // FLOYD'S CYCLE FINDING ALGORITHM
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // 1->2->3->4->5->1
    ll.tail->next = ll.head;
    ll.isCycle(ll.head);

    // ll.pop_front();
    // ll.printLL();

    // ll.push_back(22);
    // ll.printLL();
    // ll.push_back(234);
    // ll.printLL();

    // ll.pop_back();
    // ll.printLL();
    return 0;
}