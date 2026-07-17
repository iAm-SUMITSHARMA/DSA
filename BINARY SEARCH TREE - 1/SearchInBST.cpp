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
int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root1 = buildBST(arr, 6);
    int arr2[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root2 = buildBST(arr2, 9);

    cout<<search(root1, 4)<<endl;
    cout<<search(root1, 120)<<endl;
    cout<<search(root2, 4)<<endl;
}