#include <iostream>
#include<vector>
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

node* LCA(node* root, int n1, int n2){
    if(root==NULL){ 
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* leftLCA=LCA(root->left,n1,n2);
    node* rightLCA=LCA(root->right,n1,n2);
    if(leftLCA && rightLCA){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
    
}


int32_t main(){
	 node* root= new node(1);
     root->left= new node(2);
     root->right= new node(3);
     root->left->left = new node(4);
     root->left->right= new node(5);
     root->right->left = new node(6);
     root->right->right= new node(7);
     root->right->left->left= new node(8);
    node* lca =LCA(root,6,7);
    if(LCA==NULL){
        cout<<"LCA doesn't exist";
    }
    else
    cout<<"LCA: "<<lca->data;
    
	return 0;
}
 