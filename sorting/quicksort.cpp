#include<iostream>
using namespace std;
void swap(int arr[],int i, int j){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
}
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<=r;j++){
         if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
         }
         }
         swap(arr,i+1,r);
         return i+1;
}
void Quicksort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        Quicksort(arr,l,pi-1);
        Quicksort(arr,pi+1,r);
    }
}
int main(){
      int arr[]={2,-1,3,6,-20,10,100,800,300};
      Quicksort(arr,0,8);
      int n= sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 