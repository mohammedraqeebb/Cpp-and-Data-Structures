#include <iostream>
#include<queue>
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

int countnodes(node* root){
    if(root==NULL){
        return 0;
    }
    return countnodes(root->left)+countnodes(root->right)+1;
}
int sumnodes(node* root){
    if(root==NULL){
        return 0;
    }
    return sumnodes(root->left)+sumnodes(root->right)+root->data;
    
}


int32_t main() {
	node* root= new node(1);
     root->left= new node(2);
     root->right= new node(3);
     root->left->left = new node(4);
     root->left->right= new node(5);
     root->right->left = new node(6);
     root->right->right= new node(7);
     cout<<countnodes(root)<<endl;
     cout<<sumnodes(root);
    
	return 0;
}
