#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    // comstructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insertAthead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head->prev = temp;
    head = temp;
}

void insertAttail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev =tail;
    tail= temp;
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int getLength(Node* head){

    int len = 0;
    Node* temp  = head;

    while(temp!=NULL)
    {
        len++;
        temp = temp ->next;
    }
    return len;
}

int main()
{
    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = n1;
    print(head);

    cout<<getLength(head)<<endl;

    insertAthead(head, 13);
    print(head);

    insertAttail(tail, 14);
    print(head);
}