#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    for(int i = 1; i <=n; i++)
    {
        for(int j = n - 4 + i; j<=n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}