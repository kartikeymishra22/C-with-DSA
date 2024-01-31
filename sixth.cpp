#include<iostream>
using namespace std;
int main() {
    int n1,n2;
    char op;
    cout<<"Enter a number:";
    cin>>n1>>n2;
    cout<<"Enter a operand:";
    cin>>op;
    switch(op) 
    {
        case '+' :
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        default :
        cout<<"operator not found :";
        break;

    }
    return 0;
}