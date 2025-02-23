#include<iostream>
using namespace std;
int addtwo(int a, int b)
{
    int sum = (a + b);
    return sum;
}
int main()
{
    int a , b;
    cin>>a>>b;

    int sum = addtwo(a, b);

    cout<<sum<<endl;

}