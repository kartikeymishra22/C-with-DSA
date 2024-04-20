#include<iostream>
#include<string.h>
using namespace std;
bool checkpalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while(s<=e)
    {
        if(a[s] != a[s])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char name[20];

    cout<<"Enter your Name"<<endl;
    cin>>name;

    int len = strlen(name);

    cout<<"Palindrome is "<<checkpalindrome(name, len)<<endl;

}