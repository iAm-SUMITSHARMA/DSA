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
// APPROACH 1: TC: O(n) & SC: O(n)
// bool findPath(Node *root, int n, vector<int> &pt)
// {
//     if (root == nullptr)
//         return false;
//     pt.push_back(root->data);
//     if (root->data == n)
//     {
//         return true;
//     }
//     bool isLeft = findPath(root->left, n, pt);
//     bool isRight = findPath(root->right, n, pt);

//     if(isLeft == true || isRight == true){
//         return true;
//     }

//     pt.pop_back();
//     return false;
// }
// int lowestCommonAncestor(Node *root, int n1, int n2)
// {
//     vector<int> path1, path2;
//     findPath(root, n1, path1);
//     findPath(root, n2, path2);

//     int lca = -1;
//    for (int i = path1.size() - 1, j = path2.size() - 1; i >= 0 && j >= 0; i--, j--)
//     {
//         if(path1[i] == path2[j]){
//             lca = path1[i];
//             break;
//         }
//     }
//     return lca;
// }

// APPROACH 2: TC: O(n) & SC: O(1)
Node *lca(Node *root, int n1, int n2)
{
    if (root == nullptr)
        return nullptr;

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftLCA = lca(root->left, n1, n2);
    Node *rightLCA = lca(root->right, n1, n2);

    // CASE 1
    if (leftLCA != nullptr && rightLCA != nullptr)
    {
        return root;
    }

    // CASE 2
    // if(leftLCA == nullptr && rightLCA == nullptr){
    //     return nullptr;
    // }

    // CASE 3
    // if(leftLCA == nullptr ){
    //     return rightLCA;
    // }

    // CASE 4
    // if(rightLCA == nullptr ){
    //     return leftLCA;
    // }

    return leftLCA == nullptr ? rightLCA : leftLCA;
}
int main()
{
    // APPROACH 1: TC: O(n) & SC: O(n)
    // APPROACH 2: TC: O(n) & SC: O(1)
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    int idx1 = -1;
    Node *root = buildTree(nodes, idx1);
    // cout<<"lca: "<<lowestCommonAncestor(root, 4, 5)<<endl;
    // cout<<"lca: "<<lowestCommonAncestor(root, 4, 6)<<endl;

    cout << "Lca: " << lca(root, 4, 5)->data << endl;
    cout << "Lca: " << lca(root, 4, 6)->data << endl;
    return 0;
}