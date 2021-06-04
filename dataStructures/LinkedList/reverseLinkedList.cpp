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
void reverseLLIterative(node* &head){
    node* previous=NULL;
    node* current=head;
    node* nextptr;
    while(current!=NULL){
        nextptr=current->next;
        current->next=previous;
        previous=current;
        current=nextptr;
    }
   head=previous;
}
node* reverseLLrecursion(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
   node* newhead= reverseLLrecursion(head->next);
   head->next->next=head;
   head->next=NULL;

   return newhead;
}
int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertATTail(head,3);
    insertATTail(head,5);
    insertAtHead(head,1);
    insertATTail(head,6);
    insertATTail(head,7);
    printLinkedLIst(head);
    reverseLLIterative(head);
    printLinkedLIst(head);
   head= reverseLLrecursion(head);
    printLinkedLIst(head);
    return 0;
}