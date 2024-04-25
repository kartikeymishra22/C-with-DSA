#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next = NULL;

    // constructor
    Node(int d){
        this ->data = d;
    }
};

void insertAthead(Node* &head, int data){

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}

void insertAttail(Node* &tail, int data){

    Node* temp = new Node(data);
    tail->next = temp;
    tail =temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{

    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = n1;
    print(head);

    insertAttail(tail, 12);
    print(head);

    insertAttail(tail, 15);
    print(head);
}