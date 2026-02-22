// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int removeDuplicate(int arr[],int n){
    int j=0; //prev
    for(int i =1; i<n; i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
        return j+1;
    
}


int main(){
     int arr[] = {1,2,2,3};
     int n = 4;
    int newSize = removeDuplicate(arr, n);

    for(int i = 0; i < newSize; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
