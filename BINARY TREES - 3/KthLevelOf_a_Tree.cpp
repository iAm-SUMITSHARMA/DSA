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
vector<int> kLevel(Node *root, int k)
{
    if (root == nullptr)
    {
        return {};
    }
    vector<int> answer;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        if (k == 1)
        {
            for (int i = 0; i < size; i++)
            {
                Node *curr = q.front();
                q.pop();
                answer.push_back(curr->data);
                
            }
            break;
        }
        for(int i = 0; i<size; i++){
            Node* curr = q.front();
            q.pop();

            if(curr->left!=nullptr) q.push(curr->left);
            if(curr->right!=nullptr) q.push(curr->right);
        }
        k--;
    }
    cout<<"Answer: ";
    for (int x : answer){
        cout<<x<< " ";
    }
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