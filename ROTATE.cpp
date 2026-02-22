// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rotate(int arr[], int n, int k){
     k =k%n;
    reverse(arr,arr+n);
    
    reverse(arr,arr+k);
    
    reverse(arr+k,arr+n);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;

    rotate(arr, n, k);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
