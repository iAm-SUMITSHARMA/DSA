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

    // DETECTING CYCLE==========>>>
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

    // REMOVING CYCLE========
    void removeCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                slow = head;
                break;
            }
        }
        if (slow == fast) // special case: tail->head
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL; // remove cycle
        }
        else
        {
            Node *prev = fast;
            while (slow != fast)
            {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL; // remove cycle
        }
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

    if (ll.isCycle(ll.head))
    {
        ll.removeCycle(ll.head);
    }
    ll.printLL();
    return 0;
}