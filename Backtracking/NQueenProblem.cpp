#include<iostream>
using namespace std;
bool isSafe(int** arr,int x,int y, int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1)
         return false;
    }
    int row=x,col=y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
        
    }
     row=x,col=y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool NQueenPath(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
     if(isSafe(arr,x,col,n)){
            arr[x][col]=1;
         if(NQueenPath(arr,x+1,n)){
             return true;
             
            }
        arr[x][col]=0;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int i,j;
    int** arr= new int*[n];
    
     for(i=0;i<n;i++){
         arr[i]=new int[n];
        for(j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
 
    if(NQueenPath(arr,0,n))
    {
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }
    return 0;
}











