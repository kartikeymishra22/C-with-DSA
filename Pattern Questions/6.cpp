#include<iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return ;
    }

    cout<<n;
    print(n- 1);
}

void pattern(int n)
{
    if(n == 0)
    {
        return;
    }
    pattern(n - 1);
    print(n);
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    pattern(n);
}