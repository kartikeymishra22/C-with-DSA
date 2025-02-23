#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if(n==0) return 1;
        int mask =0;
        cout<<mask<<endl;
        int compliment = ~n;
        while(n!=0){
            mask = (mask<<1) | 1;
            cout<<mask<<endl;
            n=n>>1;      
        }
}