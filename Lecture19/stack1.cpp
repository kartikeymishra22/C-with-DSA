#include<iostream>
#include<stack>
using namespace std;;

int main()
{
    stack <string> s;

    s.push("Kartikey");
    s.push("Mishra");
    s.push("Love");

    cout<<"Top element is "<<s.top()<<endl;

    s.pop();
    cout<<"Top element is "<<s.top()<<endl;

    cout<<"\n\t\t\t\tThank You!!!"<<endl;
    cout<<"Size is "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

    cout<<"Front element is "<<endl;
}