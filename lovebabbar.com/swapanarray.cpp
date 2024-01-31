#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);

        }
    }
}
int main (){
    int even[8] = {3,5,1,4,6,8,11,12};
    int odd[5] = {4,6,2,9,0};

    swapAlternate(even,8);
    printArray(even,8);

    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);


    return 0;

}