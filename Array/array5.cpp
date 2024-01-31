#include<iostream>
using namespace std;

    void printArray(int arr[], int n)
    {
        cout<<"Printing the Array "<<endl;
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int main ()
    {
        int third[10] = {3, 4, 5};
        int n = 10;
        printArray(third, 10);

        int fourth[15] = {1, 1, 1};
        n = 15;
        printArray(fourth, 15);
        return 0;
    }