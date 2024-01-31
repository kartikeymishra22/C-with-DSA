#include<iostream>
using namespace std;
int selectionsort(int arr[], int n)
{
    
    for(int i = 0; i<n-1; i++)
    {
        int minIndex = i;
        for(int j = i +1; j < n; j++)
        {
            if(arr[j]>arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main ()
{
    int n[7] = { 14, 17, 88, 99, 77, 66, 55};

    cout<<"Sorted Array "<<selectionsort(n, 7)<<endl;
}