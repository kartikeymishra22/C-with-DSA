#include<iostream>
using namespace std;
int getMin(int arr[], int n)
{
    int min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int n)
{
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main ()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum value is "<<getMax(arr, n)<<endl;
    cout<<"Minimum value is "<<getMin(arr, n)<<endl;
    return 0;
}