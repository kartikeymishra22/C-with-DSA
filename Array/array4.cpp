#include<iostream>
using namespace std;
int main (){
    int third[15] = {2, 7};
    int n = 15;
    cout<<"Printing the Array "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<third[i]<<" ";
    }
    cout<<endl;
    int fourth[10] = {0};
    n = 10;
    cout<<"Printing the Array "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<fourth[i]<<" ";
    }
    cout<<endl;
    int fifth[10] = {1};
    n = 10;
    cout<<"Printing the Array "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<fifth[i]<<" ";
    }
    cout<<endl;
    cout<<"Value of the 8th index "<<fifth[8];
    cout<<endl;
    return 0;
}