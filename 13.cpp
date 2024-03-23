#include<iostream>
#include <climits>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}
int getMax(int num[], int n)
{
    int max = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}
int main()
{
    int arr[6] = { 22, 44, 79, 89, 99,69};
    cout<<"Maximum is "<<getMax(arr, 6)<<endl;
    cout<<"Minimum is "<<getMin(arr, 6)<<endl;
}