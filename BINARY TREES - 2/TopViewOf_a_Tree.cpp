#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node *buildTree(vector<int> nodes, int &idx)
{ // TC = O(n)
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes, idx);
    currNode->right = buildTree(nodes, idx);
    return currNode;
}
void TopView(Node *root)
{
    if (root == nullptr)
        return;
    queue<pair<Node *, int>> q; // (node, HD)
    map<int, int> m;            //(HD, node->data);
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> curr = q.front();
        q.pop();
        Node *currNode = curr.first;
        int currHD = curr.second;

        if (m.count(currHD) == 0)
        {
            m[currHD] = currNode->data;
        }

        if (currNode->left != nullptr)
            q.push(make_pair(currNode->left, currHD - 1));
        if (currNode->right != nullptr)
            q.push(make_pair(currNode->right, currHD + 1));
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    int idx1 = -1;
    Node *root = buildTree(nodes, idx1);
    TopView(root);
    return 0;
}