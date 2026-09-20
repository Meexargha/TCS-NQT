#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    } 
    void insertAtTail(Node* &tail, int data){
     Node* temp = new Node(data);
     tail->next=temp;
     tail=temp;
    }
    void print(Node* &tail){
        Node* temp = tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
         cout << endl;
    }

};
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;  // head points to the first node
    Node* tail = node1;  // tail points to the last node
  //  Node* node1 = new Node(10);
    
    node1->insertAtTail(tail, 20);
    node1->insertAtTail(tail, 30);
    node1->print(head); 
    return 0;

}