#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;
    node *n = new node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
void print(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        print(root->left);

        print(root->right);
    }
}
int countNode(node *root)
{
    if (root == NULL)
        return 0;
    int l = countNode(root->left);
    int r = countNode(root->right);
    return l + r + 1;
}
int height(node *root)
{
    if (root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1 + max(lh, rh);
}
int replaceSum(node *root)
{
    if (root == NULL)
        return 0;
    int lS = replaceSum(root->left);
    int rS = replaceSum(root->right);
    root->data += lS + rS;
    return root->data;
}
pair<int, int> countRequiredSum(node *root, int target)
{
    if (root == NULL)
        return make_pair(0, 0);

    pair<int, int> p1 = countRequiredSum(root->left, target);
    pair<int, int> p2 = countRequiredSum(root->right, target);

    int total_sum = p1.second + p2.second + root->data;
    int counter = p1.first + p2.first;
    if (total_sum == target)
        counter++;

    return make_pair(counter, total_sum);
}
bool isMirror(node* left, node* right){
    if(left == NULL or right == NULL) return left == right;

    if(left == NULL and right == NULL) return true;

    return left->data == right->data and  isMirror(left->left , right->right) && isMirror(left->right, right->left);

}
int main()
{
    node *root = NULL;
    root = buildTree();
    print(root);
    cout << "\n";
    cout << countNode(root);
    cout << "\n";
    cout << height(root);
    cout << "\n";
    replaceSum(root);
    print(root);
    cout << "\n";
    pair<int, int> ans = countRequiredSum(root, 7);
    cout << ans.first <<endl;
    cout << isMirror(root->left, root->right);
}