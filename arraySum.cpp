#include<bits/stdc++.h>
using namespace std;
int arraySum(int arr[], int n){
    int i=0;
    int ans=0;
    while(i<n){
        ans += arr[i];
        i++;
      
    }
     return ans;
}
int main(){
    int arr[]={2,3,4,5,6};
    int n=5;
    int ans = arraySum(arr,n);
    cout<< ans;
    return 0;
}
