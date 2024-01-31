#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int Key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while (start<=end){
        if (arr[mid]==Key){
            return mid;
        }
        if(Key>arr[mid]){
            start = mid +1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
    
}
int main(){
    int even[6] = {2,4,6,7,8,9};
    int odd[5] = {4,5,6,7,8};
    int evenIndex = binarySearch(even,6,7);
    cout<<" Index of 7 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,9);
    cout<<" Index of 9 is "<<oddIndex<<endl;

    return 0;
}