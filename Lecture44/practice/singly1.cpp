#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int d)
    {
        this ->data = d;
        this ->next = NULL;
    }
};

void insertAtposition(Node* &head, int d)
{
    Node* temp = new Node(d);
    if(head == NULL)
    {
        temp ->next = NULL;
        head = temp;
    }

    else
    {
        
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* n1 = NULL;

    Node* head = n1;

    insertAtposition(head, 10);
    print(head);

    insertAtposition(head, 19);
    print(head);



}