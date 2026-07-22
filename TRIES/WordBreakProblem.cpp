// QUESTION: WORD BREAK PROBLEM

// dictionary[] = {"i", "like","sam", "samsung", "mobile", "ice"}
// key = "ilikesamsung"

// Problem : To break down these keys in a way that these broken parts all are the part of dictionary...

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

        return temp->ifEnd ? true: false;
    }
};

bool helper(Trie &trie, string key)
{
    if (key.size() == 0)
        return true;
    for (int i = 0; i < key.size(); i++)
    {
        string first = key.substr(0, i + 1); // starting point, length
        string second = key.substr(i + 1);

        if (trie.search(first) && helper(trie, second))
        {
            return true;
        }
    }
    return false;
}

bool wordBreak(vector<string> words, string key)
{
    Trie trie;

    for (int i = 0; i < words.size(); i++)
    {
        trie.insert(words[i]);
    }

    return helper(trie, key);
}
int main()
{
    vector<string> words = {"i", "like", "sam", "samsung", "mobile", "ice"};

    string key = "ilikesamsung";

    cout << wordBreak(words, key) << endl;
}