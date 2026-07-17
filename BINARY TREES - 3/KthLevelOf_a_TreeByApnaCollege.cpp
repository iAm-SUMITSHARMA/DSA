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
void helper(Node *root, int k,int currLevel){
    if(root == nullptr){
        return;
    }
    if(currLevel == k){
        cout<<root->data<<" ";
        return;
    }
    helper(root->left, k, currLevel +1);
    helper(root->right, k, currLevel +1);
}
void kLevel(Node *root, int k)
{ // TC : O(n)(in worst case)
    helper(root, k, 1);
    cout<<endl;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    int idx1 = -1;
    Node *root = buildTree(nodes, idx1);
    kLevel(root, 3);
    return 0;
}