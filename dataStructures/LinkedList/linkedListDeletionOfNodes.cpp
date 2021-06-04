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
void deletionAtHead(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
}
void deletion(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        return;
    }
    if(head->data==val){
        deletionAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* temp1=temp->next;
    temp->next=temp->next->next;
    delete temp1;

}
int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertATTail(head,3);
    insertATTail(head,5);
    printLinkedLIst(head);
    deletionAtHead(head);
    deletion(head,1);
    printLinkedLIst(head);
}