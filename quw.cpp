#include<iostream>
using namespace std;
  
bool isSorted(int arr[], int size){

   if (size==0 || size ==1){
   return 1;
   }
   if (arr[0]> arr[1])
   
    /* code */ 
    return 0;
   
  else
  {
    /* code */
    bool remainingPart = isSorted(arr +1, size-1);
     return remainingPart;
  }
  // bool remainingPart = isSorted(arr +1, size-1);
   
}
int main(){
int arr[5] ={2,4,6,8,9};
int size = 5;
bool ans = isSorted(arr, size);

 if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}