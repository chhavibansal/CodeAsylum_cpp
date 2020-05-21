#include<bits/stdc++.h>
using namespace std;
class node{
public:
    node *left, *right;
    int data;
    node(int d){
        data = d;
        left = right = NULL;
    }
};

void preOrder(node* root){
    if(root == NULL) return ;
    cout <<root->data <<",";
    preOrder(root->left);
    preOrder(root->right);

}
int main(){
    node* root = NULL;
    preOrder(root);
}