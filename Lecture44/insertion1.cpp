#include<iostream>
using namespace std;

class Node{

    public:
    int a;
    Node* next;

    // costructor
    Node(int data)
    {
        this ->a = data;
        this ->next = NULL;
    }
};

void insertAthead(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
 
void insertAttail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}

void insertAtmiddle(Node* &head, int position, int d){
    Node* temp = head;
    int cnt = 1;

    while(cnt <position -1 ){
        temp = temp->next;
        cnt++;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert ->next = temp ->next;
    temp ->next = nodetoinsert;

}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->a<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* n1 = new Node(10);

    // cout<<n1 -> a<<endl;
    // cout<<n1 ->next <<endl;

    Node* head = n1;
    print(head);
    Node* tail = n1;
    print(head);

    insertAttail(tail, 12);

    print(head);

    insertAttail(tail, 15);
    print(head);

    insertAtmiddle(head, 3, 40);
    print(head);
}