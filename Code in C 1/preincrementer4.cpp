#include<iostream>
using namespace std;
int main() {
    int i = 1;
    int j = 2;
    int k = 3;
    int m ;
    m = i-- - j-- - k--;
    cout<<i<<""<<endl;
    cout<<j<<""<<endl;
    cout<<k<<""<<endl;
    cout<<m<<""<<endl; 
    return 0;
}