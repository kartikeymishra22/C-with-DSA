#include<iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int minIndex = i;
        for(int j = i +1; j<n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int n[7] = {12, 14, 11, 16, 19, 20, 29};

    selectionsort(n, 7);
    printArray(n, 7);
    return 0;

    
}
