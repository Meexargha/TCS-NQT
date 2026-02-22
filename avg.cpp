// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int average(int arr[], int n){
    int ans =0;
    int i=0;
    while(i<n){
        ans+=arr[i];
        i++;
        
    }
    return (double)ans/n;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
   

    double ans= average(arr,n);
    cout<<ans;

    return 0;
}
