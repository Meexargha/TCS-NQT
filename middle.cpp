#include<iostream>
using namespace std;
class Node{ 
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    void insertAtmiddle(Node* &head, int position , int data){
        Node* temp = new Node(data);
        Node* curr = head;
        int cnt=1;
        while(cnt<position-1){
            curr=curr->next;
            cnt++;
        }
        temp->next=curr->next;
        curr->next=temp;        
    }
    void print(Node* &head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout <<endl;
    }   
    
};
int main   (){
    Node* node1 = new Node(10);
    Node* head = node1;
    node1->insertAtmiddle(head, 2, 20); 
    return 0;            
}
