#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the n : ";
    cin>>n;

    int div = 2;
    while(div < n)
    {
        if(n % div == 0)
        {
            cout<<"Not Prime"<<endl;
            return 0;
        }
        div++;
    }
    cout<<"Prime"<<endl;
}