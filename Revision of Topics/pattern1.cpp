#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int row = 0;
    while(n>row)
    {
        int column = 0;
        while(n>column){
            cout<<" * ";
            column++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}