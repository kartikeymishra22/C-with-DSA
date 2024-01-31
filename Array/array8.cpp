#include<iostream>
using namespace std;
int sum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}  
int main ()
{
    int arr[5] = {4, 15, 16, 18, 19};
    cout<<sum(arr, 5)<<endl;
    return 0;
}