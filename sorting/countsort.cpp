#include<bits/stdc++.h> 
using namespace std; 
void Countsort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int f[10]={0};
    for(int i=0;i<n;i++){
        f[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        f[i]+=f[i-1];
    }
    int final[n];
    for(int i=n-1;i>=0;i--){
        final[--f[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=final[i]; 
    }
}
int main(){

    int arr[]={1,3,2,3,4,1,6,4,3};
    Countsort(arr,9);
    for(int i=0;i<=8;i++){
        cout<<arr[i]<<" ";
    }
}
