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

// By Shraddha khapra
int Kancestor2(Node *root, int val, int k)
{
    if (root == NULL)
        return -1;
    if (root->data == val)
    {
        return 0;
    }

    int leftAnc = Kancestor2(root->left, val, k);
    int rightAnc = Kancestor2(root->right, val, k);

    if (leftAnc == -1 && rightAnc == -1)
        return -1;

    int validVal = leftAnc == -1 ? rightAnc : leftAnc;

    if (validVal + 1 == k)
    {
        cout << "Kth Ancestor: " << root->data << endl;
    }
    return validVal + 1;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    int idx1 = -1;
    Node *root = buildTree(nodes, idx1);

    Kancestor2(root, 5, 2);
    Kancestor2(root, 6, 1);
    return 0;
}