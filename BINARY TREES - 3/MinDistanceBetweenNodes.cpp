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

Node *lwc(Node *root, int n1, int n2)
{
    if (root == nullptr)
        return NULL;

    if (root->data == n1 || root->data == n2)
        return root;

    Node *leftLca = lwc(root->left, n1, n2);
    Node *rightLca = lwc(root->right, n1, n2);

    if (leftLca != NULL && rightLca != NULL)
    {
        return root;
    }
    return leftLca == NULL ? rightLca : leftLca;
}
int dist(Node *root, int n)
{
    if (root == nullptr)
        return -1;
    if (root->data == n)
        return 0;
    int leftDist = dist(root->left, n);
    if (leftDist != -1)
    {
        return leftDist + 1;
    }
    int rightDist = dist(root->right, n);
    if (rightDist != -1)
    {
        return rightDist + 1;
    }

    return -1;
}
int minDistance(Node *root, int n1, int n2)
{
    Node *lca = lwc(root, n1, n2);

    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);

    return dist1 + dist2;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    int idx1 = -1;
    Node *root = buildTree(nodes, idx1);
    cout << minDistance(root, 4, 6) << endl;
    cout << minDistance(root, 4, 5) << endl;
    cout << minDistance(root, 3, 5) << endl;
    cout << minDistance(root, 5, 3) << endl;
    return 0;
}