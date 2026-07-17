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
void preorder(Node*root){
    if(root == nullptr) return ;
    cout<<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}
Node *buildBSTfromSortedArray(int arr[], int start, int end)
{
    if (start > end)
        return nullptr;
    int mid = start + (end - start) / 2;
    Node *curr = new Node(arr[mid]);
    curr->left = buildBSTfromSortedArray(arr, start, mid - 1);
    curr->right = buildBSTfromSortedArray(arr, mid + 1, end);

    return curr;
}
int main()
{
    int arr[7] = {3, 4, 5, 6, 7, 8, 9};
    Node* root = buildBSTfromSortedArray(arr, 0, 6);
    preorder(root);
    cout<<endl;
}