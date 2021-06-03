#include<iostream>
using namespace std;

long long merge(int arr[], int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        a[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        b[i]=arr[i+mid+1];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;k++;
        }
        else{
            arr[k]=b[j];
            inv+=n1-i;
            j++;k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];j++;k++;
    }
    return inv;

}
long long mergesort(int arr[],int l, int r){
    long long inv=0;
    if(l<r){
        int mid=l+r/2;
        inv+=mergesort(arr,l,mid);
        inv+=mergesort(arr,mid+1,l);
        inv+=merge(arr,l,mid,r);
    }
    return inv;
}

int main(){

    int n;
      cin>>n; 
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i]; 
      }      
      cout<<mergesort(arr,0,n-1);
        
} 