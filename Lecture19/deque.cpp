#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    
    cout<<"Size before push "<<d.size()<<endl;

    d.push_front(1);
    cout<<"Push front "<<d.front()<<endl;

    d.push_back(1);
    cout<<"Size after push "<<d.size()<<endl;

    for(int i : d)
    {
        cout<<i<<" ";
    }

    d.pop_front();
    cout<<"Push back "<<d.front()<<endl;
    cout<<endl;
    for(int i : d){
        cout<<i<<" ";
    }

    cout<<"Print first index element "<<d.at(0)<<endl;

    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

}

