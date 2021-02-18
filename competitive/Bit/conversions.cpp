// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0){
        int d =n%10;
        ans+=x*d;
        n=n/10;
        x*=2;
    }
    return ans;
}
int octalToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0){
        int d =n%10;
        ans+=x*d;
        n=n/8;
        x*=8;
    }
    return ans;
}
int hexadecimalToDecimal(string n)
{ 
    int s=n.size();
    int ans=0;
    int x=1;
    for(int i=s-1;i>=0;i--)
    { 
        
        if(n[i]>='0' && n[i]<='9')
        {
         ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
         ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }    
    return ans;
}
int decimalToBinary(int n){
    ans
}
int main() {
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}