#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this -> data = d;
        this ->next = NULL;
    }

    ~Node(){
        int value = this->data;
        while(this->next !=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Free Memory"<<endl;
    }
};

void inserttail(Node* &tail, int element, int d)
{
    // empty list
    if(tail == NULL)
    {
        Node* n1 = new Node(d);
        tail = n1;
        n1 -> next = n1;
    }

    else
    {
        // non empty list
        Node* curr = tail;
        while(curr->data  != element)
        {
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp ->next = curr ->next;
        curr->next = temp;
    }
}


void print(Node* &tail)
{
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail !=temp);
    cout<<endl;
}
int main()
{
    Node* tail = NULL;

    inserttail(tail, 2, 5);
    print(tail);

    inserttail(tail, 5, 1);
    print(tail);
}