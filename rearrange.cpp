#include<bits/stdc++.h>
using namespace std;
void rearrange (int arr[], int n){
    sort(arr,arr+n);
    int mid=n/2;
    if(n % 2 != 0){
        mid = mid + 1;
    }
    
    for(int i=0;i<mid;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=n-1;i>=mid;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8,7,1,0,5,9};
    int n =6;
    rearrange(arr,n);
    return 0;
}
