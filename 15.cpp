#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[7] = {44, 57, 13, 23, 66, 79, 99};
    int key;
    cin>>key;

    bool found = linearSearch(arr,7,key);
    if(found){
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

}