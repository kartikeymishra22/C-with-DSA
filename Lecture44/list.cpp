#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next = NULL;

    // costructor
    Node(int d){
        this ->data = d;
        this ->next = NULL;
    }

};

void insertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node *n1 = new Node(12);
    // cout<<n1 ->data<<endl;
    // cout<<n1 ->next<<endl;

    Node *head = n1;
    print(head);

    insertAthead(head, 10);
    print(head);

    



}
