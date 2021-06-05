#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left; 
    struct node* right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
int search(int inorder[],int start,int end,int current){
    for(int i=start;i<=end;i++){
        if(inorder[i]==current){
            return i;
        }
    }
    return -1;
}
node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int current=preorder[idx];
    node* root=new node(current);
    idx++;
    if(start==end){
        return root;
    }
    int pos=search(inorder,start,end,current);
    root->left=buildTree(preorder,inorder,start,pos-1);
    root->right=buildTree(preorder,inorder,pos+1,end); 
    return root;  
}
void inorderPrint(node* root){
    if(root==NULL){
        return;
    }
     inorderPrint(root->left);
    cout<<root->data<<" ";
     inorderPrint(root->right);
}
void preorderPrint(node* root){
    if(root==NULL){
        return;
    }
     cout<<root->data<<" ";
     preorderPrint(root->left);
     preorderPrint(root->right);
}


int main(){

	 int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3}; 
    node* root=buildTree(preorder,inorder,0,4);
    inorderPrint(root);
    preorderPrint(root);

	return 0;

}
