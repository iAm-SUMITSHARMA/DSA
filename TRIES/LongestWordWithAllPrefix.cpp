// QUESTION: LONGEST WORD WITH ALL PREFIX

// Problem : Longest word such that all of its prefixes exist in array.

// dict[] = {"a", "banana", "app","appl","ap", "apply", "apple"}

// if length same : then we will do lexiographically smallest

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

    void longestWordHelper(Node *root, string &ans, string temp)
    {
        for (pair<char, Node *> child : root->children)
        {
            if (child.second->ifEnd)
            {
                temp += child.first;
                if ((temp.size() == ans.size() && temp < ans) || temp.size() > ans.size())
                {
                    ans = temp;
                }
                longestWordHelper(child.second, ans, temp);
                temp = temp.substr(0, temp.size() - 1);
            }
        }
    }
    string longestWord()
    {
        string ans = "";
        longestWordHelper(root, ans, "");
        return ans;
    }
};

int main()
{
    string words[] = {"a", "banana", "app", "appl", "ap", "apply", "apple"};

    Trie trie;
    for (string str : words)
    {
        trie.insert(str);
    }

    cout << trie.longestWord() << endl;
}