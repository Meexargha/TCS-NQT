#include<iostream>
#include<stack>
using namespace std;
void printelementofstack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main (){
    stack<int>s;
    s.push(10);
    s.push(23);
    s.push(67);
    s.pop();

    printelementofstack(s);
    

}