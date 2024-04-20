#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

int main()
{
    Node* next1 = new Node();
    cout<<next1 -> data<<endl;
    cout<<next1 -> next<<endl;

}