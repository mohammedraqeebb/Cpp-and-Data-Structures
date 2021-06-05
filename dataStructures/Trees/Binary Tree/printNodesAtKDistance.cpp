#include <iostream>
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
void printSubtree(node* root, int k){
    if(root==NULL|| k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    printSubtree(root->left,k-1);
    printSubtree(root->right,k-1);
    
}
int nodesAtK(node* root, node* target, int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtree(root,k);
        return 0;
    }
    int dl=nodesAtK(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printSubtree(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=nodesAtK(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            printSubtree(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
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
     nodesAtK(root,root->right,1);
	return 0;
}
 