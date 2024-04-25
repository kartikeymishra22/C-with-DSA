#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next = NULL;

};

int main()
{
    Node H1;
    
    cout<<"Size is "<<sizeof(H1)<<endl;

    cout<<H1.data<<endl;
    cout<<H1.next<<endl;

    H1.data = 10;
    H1.next = NULL;

    cout<<H1.data<<endl;
    cout<<H1.next<<endl;

}