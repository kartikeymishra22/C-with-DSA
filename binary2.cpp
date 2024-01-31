#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int sum=0,org_num=n;
    while(n>0){
        int rem = n%10;
        sum=sum+rem*rem*rem;
    }
    if(org_num==sum){
        cout<<"Armstorng number\n";
    } else {
        cout<<"Not Armstorng number\n";
    }
    return 0;
}