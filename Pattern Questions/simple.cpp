#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Value : ";
    cin>>n;

    int row = 1;
    for(int i = 0; i<n; i++)
    {
        int column = 1;
        for(int i = 0; i<row; i++)
        {
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}
