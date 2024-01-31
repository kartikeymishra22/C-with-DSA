#include<iostream>
#include<string.h>
using namespace std;
 void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while(s < e)
    {
        swap(name[s++],name[e--]);
    }
}
int main ()
{
    char name[20];

    cout<<"Enter the Name "<<endl;
    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;

    reverse(name, strlen(name));
    cout<<"Reversed name is "<<name<<endl;

}
