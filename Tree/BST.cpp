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
node* insert(node *root , int d){
    if(root == NULL) return new node(d);

    if(d <= root->data){
        root->left  = insert(root->left , d);
    }else
    {
        root->right = insert(root->right , d);
    }
    return root;
    
}
int search(node* root, int key){
    if(root == NULL) return 0;
    if(root->data == key) return 1;
    if(root->data > key) return search(root->left, key);
    return search(root->right , key);
}
bool checkIfBst(node* root, int min , int max ){
    if(root == NULL ) return true;

    if(root->data < min || root->data > max) return false;

    return checkIfBst(root->left, min , root->data-1 ) && checkIfBst(root->right , root->data+1 , max);
}
int main(){
    node* root = NULL;
    root = insert(root, 23);
    insert(root , 14);
    insert(root , 40);
    insert(root, 30 );
    insert(root, 7);
    insert(root, 17);
    preOrder(root);
    if(checkIfBst(root, INT_MIN, INT_MAX)){
        cout <<"YES is BST\n";
    }else{
        cout <<"NOt bst\n";
    }
    cout <<endl;
    if(search(root, 5)){
        cout <<"YES\n";
    }else cout <<"NO\n";
    
    if(search(root, 17)){
        cout <<"YES\n";
    }else cout <<"NO\n";
}