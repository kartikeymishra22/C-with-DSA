#include<iostream>
using namespace std;

class Node {
    public:
    int a;
    Node* next;

    Node(int data){
        this -> a = data;
        this -> next = NULL;
    }
};
void insertAthead(Node* &head, int d){
    Node* temp  = new Node(d);
    temp ->next  = head;
    head = temp;
}

void print(Node* &head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->a<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* n1 = new Node(10);

    Node *head = n1;
    print(head);

    insertAthead(head, 12);
    print(head);
}
