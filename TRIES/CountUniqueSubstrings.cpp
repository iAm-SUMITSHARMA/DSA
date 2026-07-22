// QUESTION: COUNT UNIQUE SUBSTRINGS

// Problem : count total  distinct substrings in a string

// str = "ababa", ans = 10

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
class Node
{
public:
    unordered_map<char, Node *> children;
    bool ifEnd;
    int freq; // frequency

    Node()
    {
        ifEnd = false;
    }
};
class Trie
{
    Node *root; // initial root
public:
    Trie()
    {
        root = new Node();
        root->freq = -1;
    }
    void insert(string key)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if ((temp->children.count(key[i])) == 0)
            {
                temp->children[key[i]] = new Node(); // insert
                temp->children[key[i]]->freq = 1;
            }
            else
            {
                temp->children[key[i]]->freq++;
            }
            temp = temp->children[key[i]];
        }
        temp->ifEnd = true;
    }

    bool search(string key)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (temp->children.count(key[i]))
            {
                temp = temp->children[key[i]];
            }
            else
            {
                return false;
            }
        }

        return temp->ifEnd ? true : false;
    }

    bool startsWith(string prefix)
    {
        Node *temp = root;
        for (int i = 0; i < prefix.size(); i++)
        {
            if (temp->children[prefix[i]])
            {
                temp = temp->children[prefix[i]];
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    vector<string> words = {"apple", "app", "mango", "man", "woman"};

    Trie trie;
    for (int i = 0; i < words.size(); i++)
    {
        trie.insert(words[i]);
    }
    string prefix1 = "app";
    string prefix2 = "moon";
    cout << trie.startsWith(prefix1) << endl;
    cout << trie.startsWith(prefix2) << endl;
}