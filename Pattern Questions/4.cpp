#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;

    for(int i = 0; i<n; i++)
    {
        int column = 1;
        int toprint = 1;
        for(int i = 0; i<n; i++)
        {
            cout<<toprint<<" ";
            toprint++;
            column++;
        }
        cout<<endl;
        row++;
    }
}