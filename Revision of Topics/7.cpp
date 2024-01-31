#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int div = 2;
    while(div<n)
    {
        if(n%div == 0)
        {
            cout<<"Not Prime";
        }
        else{
            cout<<"Prime";
        }
        div = div + 1;
        cout<<endl;
    }
}