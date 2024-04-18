#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(12);

    cout<<"Push is "<<l.front()<<endl;
    cout<<"Push is "<<l.back()<<endl;

    for(int i : l)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin());
    cout<<"Erased is "<<l.front()<<endl;
    for(int i : l)
    {
        cout<<i<<" ";
        cout<<endl;
    }
    cout<<"Back is "<<l.back()<<endl;

}