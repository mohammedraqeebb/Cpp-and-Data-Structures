#include<iostream>
using namespace std;
int knapsack(int wt[],int value[],int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapsack(wt,value,w,n-1);
    }
    return max(knapsack(wt,value,w-wt[n-1],n-1)+ value[n-1],knapsack(wt,value,w,n-1));
}
int main()
{

    int n,w;
    cin>>n>>w;
    int wt[n],value[n];
    for(auto &i:wt){
        cin>>i;
    }
    for(auto &i:value){
        cin>>i;
    }
    cout<<knapsack(wt,value,w,n);   
} 