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
static int idx = -1;
Node *buildTree(vector<int> nodes)
{ // TC = O(n)
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}
// ==>> Approach 1 - O(n^2)

// int height(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     int leftHt = height(root->left);
//     int rightHt = height(root->right);
//     return max(leftHt, rightHt) + 1;
// }
// int diameter(Node *root)
// { // TC: O(n^2)
//     if(root == nullptr) return 0;
//     int currDiameter = height(root->left) + height(root->right) + 1; // through main root
//     int leftDiameter = diameter(root->left); // through left subtree
//     int rightDiameter = diameter(root->right); // through right subtree
//     return max(currDiameter, max(leftDiameter, rightDiameter));
// }

// ==>> Approach 2 - O(n)

pair<int, int> diameter2(Node *root)
{ // TC: O(n)
    if (root == nullptr)
    {
        return make_pair(0, 0);
    }
    pair<int, int> leftInfo = diameter2(root->left);   // LD, LH
    pair<int, int> rightInfo = diameter2(root->right); // RD , RH
    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));
    int finalHt = max(leftInfo.second, rightInfo.second) +1;
    return make_pair(finalDiam, finalHt);
}
int main()
{
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    Node *root = buildTree(nodes); // 1
     // cout << "diameter of tree: " << diameter(root);
     cout << "diameter of tree: " << diameter2(root).first<<endl;
     cout << "height of tree: " << diameter2(root).second<<endl;
}