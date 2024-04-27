#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAthead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void insertAttail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail ->next= temp;
    temp = tail;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = NULL;
    

    insertAthead(head, 11);
    print(head);

    insertAthead(head, 12);
    print(head);

    Node* tail = NULL;

    insertAttail(tail, 15);
    print(tail);
}