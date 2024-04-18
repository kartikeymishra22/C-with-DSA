#include<iostream>
using namespace std;

int main()
{
    int num = 1;

    cout<<"The Value of num is "<<num<<endl;

    cout<<"The addres is "<<&num<<endl;


    int *ptr = &num;

    cout<<*ptr<<endl;
    cout<<ptr<<endl;
}