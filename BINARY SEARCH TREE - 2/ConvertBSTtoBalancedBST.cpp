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
void preorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void getInorder(Node *root, vector<int> &vec)
{
    if (root == nullptr)
        return;
    getInorder(root->left, vec);
    vec.push_back(root->data);
    getInorder(root->right, vec);
}
Node *buildBalancedBSTfromNormalBST(vector<int> vec, int start, int end)
{
    if (start > end)
        return nullptr;
    int mid = start + (end - start) / 2;
    Node *curr = new Node(vec[mid]);
    curr->left = buildBalancedBSTfromNormalBST(vec, start, mid - 1);
    curr->right = buildBalancedBSTfromNormalBST(vec, mid + 1, end);

    return curr;
}
Node *buildBalancedBST(Node *root)
{
    vector<int> vec;
    getInorder(root, vec);

    return buildBalancedBSTfromNormalBST(vec, 0, vec.size() - 1);
}
int main()
{
    Node *root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);

    root = buildBalancedBST(root);
    preorder(root);
    cout << endl;
}