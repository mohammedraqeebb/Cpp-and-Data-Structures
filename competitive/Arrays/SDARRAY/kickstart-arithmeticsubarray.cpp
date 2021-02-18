#include<iostream>
using namespace std;
int main()
{
    int nt;
    for(int k=1;k<=nt;k++)
    {
    int n,j=2;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr=2,ans=2 ;
    int pd=a[1]-a[0];
    while(j<n){
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        j++;
        ans=max(ans,curr);
        
    }
    cout<<ans<<endl;
    }

}