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

void insertAthead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAttail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}

void insertAtposition(Node* &head, int position, int d)
{
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node* n1 = new Node(d);
    n1 -> next = temp ->next;
    temp -> next = n1;
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

void deletenode(Node* &head, int position)
{

    if(position == 1)
    {
        Node* temp =head;
        head = head ->next;
        temp->next = NULL;
        delete temp;
    }
    else{
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt<position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr ->next;
    curr->next = NULL;
    delete curr;
    }
}

int main()
{
    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = n1;

    print(head);

    insertAthead(head, 5);
    print(head);

    insertAthead(head, 15);
    print(head);

    insertAttail(tail , 20);
    print(head);

    insertAtposition(head, 3, 55);
    print(head); 

    deletenode(head, 5);
    print(head);
}