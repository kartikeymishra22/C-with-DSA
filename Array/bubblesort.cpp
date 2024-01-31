#include<iostream>
using namespace std;
int bubblesort(int arr[], int n)
{
    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int arr[8] = {11, 55, 66, 88, 79, 89, 69, 59};
    bubblesort(arr, 8);
    printArray(arr, 8);
    return 0;
}