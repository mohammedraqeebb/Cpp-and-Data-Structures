// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
     cout<<"Enter the value of N"<<endl;
     cin>>n;
     for(int i=1;i<=3;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if((i+j)%4==0 || (i==2 && j%4==0))
               cout<<"* ";
             else
               cout<<"  ";
         }
         cout<<endl;
     }

    return 0;
}