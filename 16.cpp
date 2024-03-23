#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void print(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {2, 7, 5, 9, 6};
    reverse(arr,5);
    print(arr,5);
}