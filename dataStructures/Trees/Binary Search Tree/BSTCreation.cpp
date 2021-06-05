#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
node* creationBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }

    if(root->data>val){
        root->left=creationBST(root->left,val);
      
    }
    else{
    root->right=creationBST(root->right,val);
    }
    return root;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){

    node* root=NULL;
    root=creationBST(root,7);
    creationBST(root,5);
    creationBST(root,4);    
    creationBST(root,3);    
    creationBST(root,6);    
    creationBST(root,8);
    creationBST(root,3);
    creationBST(root,10);
    inorder(root);  
}