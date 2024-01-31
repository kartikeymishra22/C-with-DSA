#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[], int n)
{
    for(int i = 0; i < n; i = i+2)
    {
        if(i + 1 < n)
        {
            swap(arr[i+1],arr[i]);
        }
    }
}
int main ()
{
    int arr[8] = {22, 11, 33, 14, 16, 17, 18, 12};
    swapalternate(arr, 8);
    printArray(arr, 8);
    cout<<endl;
    return 0;
}