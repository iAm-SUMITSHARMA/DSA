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
    // destructor
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
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    // destructor
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic allocation = aur ye new keyword ke wajah se memory se delete nahi hoga..... Aur ek aur baat dynamic allocation function par depend nahi krta........

        // Node* newNode(val); // static allocation - mtlb jaise hi  function khatam hoga ....... vaise hi delete ho jaayegi memory se.......

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
    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "position is INVALID" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    // helper function for recursive search
    int helper(Node *temp, int key)
    {
        if (temp == NULL)
        {
            return -1;
        }
        if (temp->data == key)
        {
            return 0;
        }
        int idx = helper(temp->next, key);
        if (idx == -1)
        {
            return -1;
        }

        return idx + 1;
    }
    // Recursive search
    int recursiveSearch(int key)
    {
        return helper(head, key);
    }
};
int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.printLL();
    ll.insert(55, 3); // insert
    ll.printLL();

    cout << "Holo " << ll.recursiveSearch(55) << endl;
    cout << "Holo " << ll.recursiveSearch(575) << endl;
    return 0;
}