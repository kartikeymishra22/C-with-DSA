#include<iostream>
using namespace std;

int power(int a, int b)
{
    if(b == 0){
        return 1;
    }
    return  (a * power(a, b - 1));
}


int main()
{
    int a;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    int ans = power(a, b);

    cout<<ans<<endl;
}