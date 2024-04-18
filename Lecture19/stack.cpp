#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"Stack is "<<s.size()<<endl;
    cout<<"Stack is "<<s.top()<<endl;

    
}
