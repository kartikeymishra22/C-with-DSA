#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;
};

int main()
{
    Node *next = new Node();

    cout<<next ->data<<endl;
    cout<<next ->next<<endl;
}