#include <iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1)
    {
       return true; 
    }
    bool prev=sorted(arr+1,n-1);
  
    return(arr[0]<arr[1] && prev);
}

int main() {
    int arr[]={1,2,3,4,5};
    int n=5;
    cout<<sorted(arr,n);

	return 0;
}
