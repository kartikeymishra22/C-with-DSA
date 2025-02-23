#include<iostream>
using namespace std;
int main ()
{
   int arr[10];

   cout<<"Adress of array "<<arr<<endl; 

   int temp[10];
   cout<<sizeof(temp)<<endl;
   int *ptr = &temp[0];
   cout<<sizeof(ptr)<<endl;
   
}
