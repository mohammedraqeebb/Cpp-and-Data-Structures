#include <iostream>
using namespace std;
void merge(int arr[],int l, int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
     int a[i]=arr[l+i];

    for(int i=0;i<n1;i++)
     int b[i]=arr[mid+1+i];
    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n1)
    {
        arr[j]=b[j];
        j++;
        k++;
        
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=l+r/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main() {
int arr[]={2,3,9,4,6,0};
mergesort(arr,0,5);
for(int i=0;i<6;i++)
cout<<arr[i]<<endl;

	return 0;
}
