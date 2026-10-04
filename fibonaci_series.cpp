#include<iostream>
using namespace std;

//base case 
int  printfib(int n){
    if(n==0)return 0;
    if(n == 1)return 1;
    
    int ans = printfib(n-1) + printfib(n-2);
    return  ans;
}

int main(){

    int n ;
    cin >> n;
     for (int i = 0; i < n; i++) {
        cout << printfib(i) << " ";
    }
    cout << endl;
    return 0;
}













/*int main() {

    int n = 10;

    int a = 0;
    int b = 1;
    cout<<a <<" " <<b<<" ";
    for(int i = 1; i<=n; i++ ) {
        
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    return 0;
}
    */