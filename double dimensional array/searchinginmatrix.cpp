#include <iostream>
using namespace std;
 

int main() {
	int m,n,target;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin>>mat[i][j];
	    }
	}
    cin>>target;
    bool found=false;
    int r=0,c=m-1;
    while(r<n && c>=0)
    {
        if(mat[r][c]==target)
         found=true;
        else if(mat[r][c]>target)
           c--;
        else
           r++;
    }
    if(found)
    cout<<"Element found";
    else
    cout<<"Element not found";
}