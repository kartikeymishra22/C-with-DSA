#include<iostream>
using namespace std;
int main ()
{
    int arr[] = {1, 28, 14, -13, 16, -28, 13, 16};
    int n = 8;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = arr[i]+sum;
    }
    cout<<sum<<endl;
    return 0;
}