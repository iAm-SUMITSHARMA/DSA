#include <iostream>
#include <vector>
#include <climits>
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
void inorder(Node *root, vector<int> &nodes)
{
    if (root == nullptr)
        return;
    inorder(root->left, nodes);
    nodes.push_back(root->data);
    inorder(root->right, nodes);
}
void mergeTwoSortedArrays(vector<int> &merged, vector<int> nodes1, vector<int> nodes2)
{
    int i = 0;
    int j = 0;
    while (i < nodes1.size() && j < nodes2.size())
    {
        if (nodes1[i] < nodes2[j])
        {
            merged.push_back(nodes1[i]);
            i++;
        }
        else
        {
            merged.push_back(nodes2[j]);
            j++;
        }
    }
    while (i < nodes1.size())
    {
        merged.push_back(nodes1[i]);
        i++;
    }
    while (j < nodes2.size())
    {
        merged.push_back(nodes2[j]);
        j++;
    }
}
Node *buildBST(vector<int> nums, int start, int end)
{
    if (start > end)
        return nullptr;
    int mid = start + (end - start) / 2;
    Node *curr = new Node(nums[mid]);
    curr->left = buildBST(nums, start, mid - 1);
    curr->right = buildBST(nums, mid + 1, end);
    return curr;
}
int main()
{
    Node *root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node *root2 = new Node(9);
    root2->left = new Node(3);
    root2->right = new Node(12);

    vector<int> nodes1;
    inorder(root1, nodes1);
    vector<int> nodes2;
    inorder(root2, nodes2);

    vector<int> merged;
    mergeTwoSortedArrays(merged, nodes1, nodes2);

    Node *root = buildBST(merged, 0, merged.size() - 1);
    preorder(root);
    cout << endl;
}