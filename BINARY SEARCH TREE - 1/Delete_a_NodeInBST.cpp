#include <iostream>
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
Node *insert(Node *root, int val) // TC : O(logn)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
Node *buildBST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
bool search(Node *root, int key)
{
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
    return false;
}
Node *getInorder(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
Node *delNode(Node *root, int val)
{
    if (root == nullptr)
        return nullptr;
    if (val < root->data)
        root->left = delNode(root->left, val);
    else if (val > root->data)
        root->right = delNode(root->right, val);
    else
    {
        // root == val
        // Case 1: 0 Children case
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // Case 2: 1 Children case
        if (root->left == NULL || root->right == NULL)
        {
            return root->left == NULL ? root->right : root->left;
        }
        // Case 3: 2 Children case
        Node *IS = getInorder(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data);
        return root;
    }
    return root;
}
int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root1 = buildBST(arr, 6);
    int arr2[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root2 = buildBST(arr2, 9);

    inorder(root2);
    cout << endl;

    delNode(root2, 4);
    inorder(root2);
    cout << endl;
}