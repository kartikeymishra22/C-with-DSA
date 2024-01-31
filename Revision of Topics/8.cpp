#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int num = 1;
    int ans = 1;
    while(num<=n)
    {
        ans = ans*num;
        num = num +1;
    }
    cout<<ans<<endl;
}