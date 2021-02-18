#include <iostream>
using namespace std;
 

int main() {
	int m,n,target;
    cin>>m>>n;
    int m1[m][n];
    for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cin>>m1[i][j];
	    }
	}
    cin>>target;
    bool found=false;
    int r=0,c=m-1;
    while(r<n && c>=0)
    {
        if(m1[r][c]==target)
         found=true;
        else if(m1[r][c]>target)
        c--;
        else
        r++;
    }
    if(found==true)
    cout<<"Element found";
    else
    cout<<"Element not found";
}