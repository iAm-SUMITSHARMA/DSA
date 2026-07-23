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
    }
    void insert(string key)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if ((temp->children.count(key[i])) == 0)
            {
                temp->children[key[i]] = new Node(); // insert
            }
            temp = temp->children[key[i]];
        }
        temp->ifEnd = true;
    }

    int countNode(Node *root)
    {
        if (root == nullptr)
            return 0;
        int count = 0;
        for (auto child : root->children)
        {
            count += countNode(child.second);
        }
        return count + 1;
    }
    int countUniqueStr()
    {
        return countNode(root);
    }
};

int main()
{
    string str = "ababa";
    Trie trie;
    // Adding suffixes to str
    for (int i = 0; i < str.size(); i++)
    {
        trie.insert(str.substr(i));
    }

    cout << trie.countUniqueStr() << endl;
}