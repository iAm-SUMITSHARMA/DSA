// QUESTION: PREFIX PROBLEM

// Problem : Find *shortest unique prefix* for each word. (no word is prefix of another)

// words[] = {"zebra", "dog","dove", "duck"}
// ans[] = {"z", "dog","dov", "du"}

// ASKED in GOOGLE & MICROSOFT [HARD]
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

    string getPrefix(string words) // O(L)
    {
        Node *temp = root;
        string prefix = "";
        for (int i = 0; i < words.size(); i++)
        {
            prefix += words[i];
            if (temp->children[words[i]]->freq == 1)
            {
                break;
            }
            temp = temp->children[words[i]];
        }
        return prefix;
    }
};

void prefixProblem(vector<string> words)
{
    Trie trie;

    for (int i = 0; i < words.size(); i++)
    {
        trie.insert(words[i]);
    }

    for (int i = 0; i < words.size(); i++)
    {
        cout << trie.getPrefix(words[i]) << endl;
    }
}
int main()
{
    vector<string> words = {"zebra", "dog", "dove", "duck"};

    prefixProblem(words);
}