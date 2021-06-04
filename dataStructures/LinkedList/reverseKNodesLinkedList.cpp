#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }       
};
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void insertATTail(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void printLinkedLIst(node* head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverseKNodes(node* &head,int k){
    node* temp=head;
    node* previous=NULL;
    node* current=head;
    node* nextptr;
    int count=0;
    while(current!=NULL && count<k){
         nextptr=current->next;
         current->next=previous;
         previous=current;
         current=nextptr;
         count++;
    }
    if(nextptr!=NULL){
         head->next=reverseKNodes(nextptr,k);
    }
    return previous;
}
int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertATTail(head,3);
    insertATTail(head,5);
    insertATTail(head,6);
    insertATTail(head,7);
    head=reverseKNodes(head,4);
    printLinkedLIst(head);
}