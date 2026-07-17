// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         left = right = NULL;
//     }
// };
// void preorder(Node *root)
// {
//     if (root == nullptr)
//         return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(Node *root, vector<int> &nodes)
// {
//     if (root == nullptr)
//         return;
//     inorder(root->left, nodes);
//     nodes.push_back(root->data);
//     inorder(root->right, nodes);
// }

// Node *buildBST(vector<int> nums, int start, int end)
// {
//     if (start > end)
//         return nullptr;
//     int mid = start + (end - start) / 2;
//     Node *curr = new Node(nums[mid]);
//     curr->left = buildBST(nums, start, mid - 1);
//     curr->right = buildBST(nums, mid + 1, end);
//     return curr;
// }
// void getVector(Node *root, vector<int> &vec)
// {
//     if (root == nullptr)
//         return;
//         vec.push_back(root->data);
//     getVector(root->left, vec);
//     getVector(root->right, vec);
// }
// void isCompleteTree(Node *root)
// {
//     vector<int> vec;
//     getVector(root, vec);
//     for (int x : vec)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *root1 = new Node(1);
//     root1->left = new Node(2);
//     root1->right = new Node(3);
//     root1->left->left = new Node(4);
//     root1->left->right = new Node(5);
//     root1->right->left = new Node(6);

//     isCompleteTree(root1);a
//     cout << endl;
// }