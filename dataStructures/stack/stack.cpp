#include <iostream>
using namespace std;
#define n 100
class stack{
    int *arr;
    int top;
    public:
     stack(){
         arr=new int[n];
          top=-1;
     }
     
    void push(int val){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }
        top--;
    }
    int topp(){
         if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
   
};
int main() {
	stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.topp();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.empty();
	
	return 0;
}
#include <iostream>
using namespace std;
#define n 100
class stack{
    int *arr;
    int top;
    public:
     stack(){
         arr=new int[n];
          top=-1;
     }
     
    void push(int val){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }
        top--;
    }
    int topp(){
         if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
   
};
int main() {
	stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.topp();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.empty();
	
	return 0;
}
