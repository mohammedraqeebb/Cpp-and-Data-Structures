#include <iostream>
using namespace std;
 

int main() {
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int m1[n1][n2];
	int m2[n2][n3];
	int ans[n1][n3];
	int i,j,k;
	for(i=0;i<n1;i++)
	{
	    for(j=0;j<n2;j++)
	    {
	        cin>>m1[i][j];
	    }
	}
	for(i=0;i<n2;i++)
	{
	    for(j=0;j<n3;j++)
	    {
	        cin>>m2[i][j];
	    }
	}
	for(i=0;i<n1;i++)
	{
	    for(j=0;j<n3;j++)
	    {
	        ans[i][j]=0;
	    }
	}
		for(i=0;i<n1;i++)
	{
	    for(j=0;j<n3;j++)
	    {
	        for(k=0;k<n2;k++)
	        
	        {
	            ans[i][j]+=m1[i][k]*m2[k][j];
	        }
	    }
	}
		for(i=0;i<n1;i++)
	{
	    for(j=0;j<n3;j++)
	    {
	       cout<< ans[i][j]<<"  ";
	    }
	    cout<<endl;
	}


return 0;
	
	
	
	
}
    