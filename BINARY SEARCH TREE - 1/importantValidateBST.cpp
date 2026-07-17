#include <iostream>
#include <vector>
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
bool validateHelper(Node *root, Node *min, Node *max)
{
    if (root == nullptr)
        return true;

    if (min != nullptr && root->data <= min->data)
        return false;

    if (max != nullptr && root->data >= max->data)
        return false;

    return validateHelper(root->left, min, root) && validateHelper(root->right, root, max);
}
bool validateBST(Node *root)
{
    return validateHelper(root, nullptr, nullptr);
}
int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node *root1 = buildBST(arr, 6);
    int arr2[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root2 = buildBST(arr2, 9);

    cout << validateBST(root2) << endl;
    cout << validateBST(root1) << endl;
    
    // making fake bst: {15, 5, 3, 1, 4, 6, 10, 11, 14}; with replacing 8 with 15
    root2->data = 15;
    cout << validateBST(root2) << endl;
}