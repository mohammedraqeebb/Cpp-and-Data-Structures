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


void makecycle(node* &head,int pos){
   node* temp=head;
   node* startnode;
   int count=1;
   while(temp->next!=NULL){
    if(count==pos){
        startnode=temp;
    }
    count++;
    temp=temp->next;
   }
   temp->next=startnode;
}
bool detectcycle(node* head){
    node* fast=head;
    node* slow=head;
    if(head==NULL){
        return false;
    }
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void removecycle(node* &head){
    node* fast =head;
    node* slow=head;
    do{
        fast=fast->next->next;
        slow=slow->next;
    }while(fast!=slow);
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
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
    printLinkedLIst(head);
    cout<<detectcycle(head)<<endl;
    makecycle(head,3);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    cout<<detectcycle(head)<<endl;
    printLinkedLIst(head);

}