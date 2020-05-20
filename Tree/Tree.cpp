#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *left;
    node *right;
    int data;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void preOrder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << ", ";
    preOrder(root->left);

    preOrder(root->right);
}
void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ,";
    inOrder(root->right);
}
int countNoOfNodes(node *root)
{
    if (root == NULL)
        return 0;
    return 1 + countNoOfNodes(root->left) + countNoOfNodes(root->right);
}

int height(node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(height(root->left) , height(root->right));
}
void levelOrderTraversal(node* root){
    if(root == NULL) return ;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* front = q.front();
        cout << front->data<<", ";
        q.pop();
        if(front->left != NULL){
            q.push(front->left);
        }

        if(front->right != NULL){
            q.push(front->right);
        }
    }
}
int replaceNodeWithSum(node* root){
    if(root == NULL) return 0 ;
    int leftSum = replaceNodeWithSum(root->left);
    int rightSum = replaceNodeWithSum(root->right);
    root->data+= leftSum+ rightSum;
    return root->data;
}
int main()
{
    node *root = buildTree();
    preOrder(root);
    cout << "\n";
    cout << countNoOfNodes(root);
    cout <<"\n";
    cout << height(root);
    cout <<endl;
    replaceNodeWithSum(root);
    levelOrderTraversal(root);
}
