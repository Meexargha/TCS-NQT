#include<bits/stdc++.h>
using namespace std;
void freq(int arr[], int n){
    unordered_map<int,int>f;
    
    for(int i=0;i<n;i++){
       f[arr[i]]++;
    }
       for(auto x:f){
           cout<<x.first<<" "<<x.second<<endl;
       }
    }
int main(){
    int arr[]={2,3,3,3,2,2};
    int n=6;
    freq(arr,n);
    return 0;
}
    
