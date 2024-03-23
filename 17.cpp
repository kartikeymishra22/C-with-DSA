#include<iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    for(int i = 0; i<n; i += 2)
    {
        if(i + 1 < n){
            swap(arr[i],arr[i+1]);
        }
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
    int arr[5] = {1, 2, 4, 5, 6};
    swapAlternate(arr,5);
    print(arr,5);

    return 0;
}