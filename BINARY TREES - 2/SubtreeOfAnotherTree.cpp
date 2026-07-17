#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
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
bool checkEqual(Node *root, Node *subroot)
{
    if (root == nullptr && subroot == nullptr)
        return true;
    if (root == nullptr || subroot == nullptr)
        return false;
    if (root->data != subroot->data)
        return false;

    bool leftSame = checkEqual(root->left, subroot->left);
    bool rightSame = checkEqual(root->right, subroot->right);

    if (leftSame == false || rightSame == false)
        return false;
    else
        return true;
}
bool isSubtree(Node *root, Node *subroot)
{
    if (root == nullptr && subroot == nullptr)
        return true;
    else if (root == nullptr || subroot == nullptr)
        return false;
    if (root->data == subroot->data)
    {
        if(checkEqual(root, subroot)){
            return true;
        }
    }
    return isSubtree(root->left, subroot) || isSubtree(root->right, subroot);
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    int idx1 = -1;
    Node *root = buildTree(nodes, idx1);

    vector<int> subnode = {2, 4, -1, -1, 5, -1, -1};
    // vector<int> subnode = {5, -1, 6, -1, 7, -1, -1};
    int idx2 = -1;
    Node *subroot = buildTree(subnode, idx2);
    bool result = isSubtree(root, subroot);
    cout << (result ? "Subtree found" : "Subtree not found") << endl;
    return 0;
}