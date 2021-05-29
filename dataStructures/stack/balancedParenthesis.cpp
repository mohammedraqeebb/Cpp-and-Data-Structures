#include <iostream>
#include<stack>
#include<math.h>
using namespace std;
bool isValid(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' or s[i]=='(' or s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }
            else{
              return false;
            }
        }
         else if(s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
             else{
               return false;
            }
        }
         else if(s[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
             else{
                return false;
            }
        }
        
    }
    if(st.empty()){
        return true;
    }
}

int main(){
  string s;
  cin>>s;
  if(isValid(s)){
      cout<<"Valid string";
  }
  else{
      cout<<"Invalid string";
  }
}