// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
double findMedian(int arr[], int n){
   sort(arr,arr+n);
   if(n%2==0){
       return (arr[n/2-1]+arr[n/2])/2.0;
       
   }else {
       return arr[n/2];
   }
}

int main(){
     int arr[] = {7,1,5,3};
     int n = 4;
     int ans=findMedian(arr,n);
     cout<<ans;
     
     
    
    return 0;
}
