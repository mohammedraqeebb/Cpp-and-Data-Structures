#include<iostream>
using namespace std;
bool isSafe(int** arr,int x,int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool mazePath(int** arr,int x,int y,int n,int** &solArr){
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(mazePath(arr,x+1,y,n,solArr)){
            return true;
        }
        if(mazePath(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int i,j;
    int** arr= new int*[n];
    int** solArr= new int*[n];
     for(i=0;i<n;i++){
         arr[i]=new int[n];
     }
     
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
     for(i=0;i<n;i++){
         solArr[i]=new int[n];
        for(j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }
 
    if(mazePath(arr,0,0,n,solArr))
    {
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }
    return 0;
}










