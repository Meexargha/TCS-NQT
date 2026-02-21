#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[],int n){
    int i=0;
    int end =n-1;
    while(i<end){
        swap(arr[i],arr[end]);
        i++;
        end--;
        }
    }
int main (){
    int arr[]={1,2,3,4,5};
    int n =5;
    Reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
