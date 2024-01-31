#include<iostream>
using namespace std;
int peak(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s = mid +1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;
}
int main(){
    int odd[5] ={6, 7, 8, 3, 4 };
    cout<<" the peak is "<<peak(odd, 5 )<<endl;
    return 0; 
}