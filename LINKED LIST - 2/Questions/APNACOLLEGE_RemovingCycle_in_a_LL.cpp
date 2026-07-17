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

    // REMOVING CYCLE========
    void removeCycle(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        // STEP 1: DETECT CYCLE:----------
        bool isCycle = false;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "Cycle exists..." << endl;
                isCycle = true;
                break;
            }
        }

        if (!isCycle) // if cycle not exist
        {
            cout << "Cycle doesn't exists..." << endl;
            return;
        }

        // STEP 2: FIND START OF CYCLE
        slow = head;
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

    ll.removeCycle(ll.head);
    ll.printLL();
    ll.removeCycle(ll.head);
    return 0;
}