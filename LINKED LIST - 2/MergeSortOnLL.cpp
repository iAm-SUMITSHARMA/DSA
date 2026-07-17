#include <iostream>
#include <list>
#include <iterator>
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
        // do nothing for now
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
            cout << temp->data << "->";
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
    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL) // ⭐ THIS IS THE KEY
        {
            head = tail = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
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
    // spliting at mid
    Node *splitAtMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;
        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL)
        {
            prev->next = NULL; // split at middle
        }
        return slow; // slow = righthead
    }
    Node *merge(Node *lefthead, Node *righthead)
    {
        List ans;
        Node *i = lefthead;
        Node *j = righthead;
        while (i != NULL && j != NULL)
        {
            if (i->data <= j->data)
            {
                ans.push_back(i->data);
                i = i->next;
            }
            else
            {
                ans.push_back(j->data);
                j = j->next;
            }
        }
        while (i != NULL)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        while (j != NULL)
        {
            ans.push_back(j->data);
            j = j->next;
        }
        return ans.head;
    }
    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *rightH = splitAtMid(head);

        Node *lefthead = mergeSort(head);    // left head
        Node *righthead = mergeSort(rightH); // right head

        return merge(lefthead, righthead);
    }
};
// WHAT WE WILL LEARN FROM THIS:
// 1. merge sort in linked list
// 2. how we can find half / mid of linked list
// 3.
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.printLL();

    ll.head = ll.mergeSort(ll.head);
    ll.printLL();
    return 0;
}