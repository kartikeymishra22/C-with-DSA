#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int result = 0;
    while(n >0)
    {
        int digit = n % 10;
        result = result * 10 + digit;
        n = n / 10; 
    }
    cout<<result<<endl;
}