#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 2;
    while(n>i)
    {
        if(n%i== 0)
        {
            cout<<"Not Prime"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Prime"<<endl;
    return 0;
}
