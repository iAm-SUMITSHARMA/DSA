#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Node
{
public:
    string key;
    int value;
    Node *next;
    Node(string key, int val)
    {
        this->key = key;
        this->value = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};
class HashTable
{
    int totSize;
    int currSize;
    Node **table;

    int hashFunction(string key)
    {
        int idx = 0;
        for (int i = 0; i < key.size(); i++)
        {
            idx = idx + (key[i] * key[i]) % totSize;
        }
        return idx % totSize;
    }

    // for rehashing
    void rehash()
    {
        Node **oldTable = table;
        int oldSize = totSize;
        totSize = 2 * totSize;
        currSize = 0;
        table = new Node *[totSize];
        // initialize table with NULL value
        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }
        // copy old values to new table
        for (int i = 0; i < oldSize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->value);
                temp = temp->next;
            }
            // To delete old values from old
            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }

        // To delete whole old table
        delete[] oldTable;
    }

public:
    HashTable(int size = 5)
    {
        this->totSize = size;
        currSize = 0;

        table = new Node *[totSize];
        // initialize table with NULL value
        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, int val) // O(1)
    {
        int idx = hashFunction(key);

        Node *newNode = new Node(key, val);

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        // Rehashing

        double lambda = currSize / (double)totSize;
        if (lambda > 1)
        {
            rehash();
        }
    }

    bool exists(string key)
    {
        int idx = hashFunction(key);

        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            { // found
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key)
    {
        int idx = hashFunction(key);

        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key) // found
            {
                return temp->value;
            }
            temp = temp->next;
        }
        return -1;
    }

    // remove operation
    void erase(string key)
    {
        int idx = hashFunction(key);

        Node *temp = table[idx];
        Node *prev = temp;
        while (temp != NULL) // O(lambda), which is a constant time
        {
            if (temp->key == key)
            {
                if (prev == temp)
                { // have to delete head;
                    table[idx] = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    void print()
    {
        for (int i = 0; i < totSize; i++)
        {
            cout << "idx : " << i << " -> ";
            Node *temp = table[i];
            while (temp != NULL)
            {
                cout << temp->key << "->" << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
int main()
{
    HashTable ht;
    ht.insert("India", 150);
    ht.insert("China", 150);
    ht.insert("US", 50);
    ht.insert("Nepal", 10);
    ht.insert("UK", 30);

    if (ht.exists("China"))
    {
        cout << "China population: " << ht.search("China") << endl;
    }

    ht.print();
    cout << "---->>>>>" << endl;
    ht.erase("China");
    ht.print();
    cout << "---->>>>>" << endl;
    ht.erase("China");
    ht.print();
    cout << "---->>>>>" << endl;
}