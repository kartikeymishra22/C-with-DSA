#include<iostream>
using namespace std;
bool search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main ()
{
    int arr[10] = {19, 11, 13, 12, 88, 1, 20, 4};
    cout<<"Enter the Key "<<endl;
    int key;
    cin>>key;
    bool found  = search(arr,10,key);
    if(found)
    {
        cout<<"Key is Present "<<endl;
    }
    else
    {
        cout<<"Key is Absent "<<endl;
    }
    return 0;
}