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

    // Destructor
    ~Node()
    {
        int value = this ->data;

        // memory free
        while(this->next != NULL)
        {
            delete next;
            this ->next = NULL;
        }

        cout<<"Memory Free"<<endl;
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
    tail->next = temp;
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

void insertAtposition(Node* &head, int position, int d)
{
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1)
    {
        temp = temp ->next;
        cnt++;
    }

    Node* n1 = new Node(d);
    n1->next = temp->next;
    temp -> next = n1;
}

void deletenode(Node* &head, int position)
{
    if(position == 1)
    {
        Node* temp = head;
        head = temp->next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
        prev ->next = curr ->next;
        curr ->next = NULL;
        delete curr;
    }
}


int main()
{
    Node* n = new Node(10);
    // cout<<n->data<<endl;;
    // cout<<n->next<<endl;

    Node* head = n;
    print(head);
    Node* tail = n;
    print(head);

    insertAthead(head, 15);
    print(head);

    insertAthead(head, 12);
    print(head);

    insertAttail(tail, 22);
    print(head);

    insertAtposition(head, 3, 24);
    print(head);

//     deletenode(head, 4);
//     print(head);
}