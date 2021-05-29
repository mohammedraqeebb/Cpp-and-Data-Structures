#include<iostream>
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
class queue{
    
    node* front;
    node* back;
    public: 
    queue(){
        front=NULL;
        back=NULL;
    }
    
    void push(int x){
        node* n= new node(x);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"stack is empty";
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peak(){
           if(front==NULL){
            cout<<"stack is empty";
            return -1;
        }
        return front->data;
    }
    bool empty(){
         if(front==NULL){
          return true;
         }
         else{
           return false;
         }
    }
    void display(){
        node *temp=front;
          if(front==NULL){
            cout<<"stack is empty";
            return;
         }
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" ";
    }
};
int main(){
    queue q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.display();
    q.pop();
   
    cout<<q.peak();
    cout<<q.empty();
    return 0;
}