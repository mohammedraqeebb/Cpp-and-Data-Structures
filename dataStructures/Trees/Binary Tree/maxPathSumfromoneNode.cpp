#include <bits/stdc++.h>
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
int maxPathSumutil(node* node, int &ans){
    if(node==NULL){
        return 0;
    }
    int left=maxPathSumutil(node->left,ans);
    int right=maxPathSumutil(node->right,ans);
    int nodemax=max(max(node->data, node->data+left+right),max(node->data+left,node->data+right));
    ans= max(ans,nodemax);
    int singlePathSum=max(node->data,max(node->data+left,node->data+right));
    return singlePathSum;
    
}
int maxPathSum(node* root){
    int ans= INT_MIN;
    maxPathSumutil(root,ans);
    return ans;
}
int32_t main(){
	 node* root= new node(1);
     root->left= new node(-20);
     root->right= new node(3);
     root->left->left = new node(4);
     root->left->right= new node(5);
     root->right->left = new node(6);
     root->right->right= new node(7);
     root->right->left->left= new node(8);
     cout<<maxPathSum(root);
	return 0;
}
 