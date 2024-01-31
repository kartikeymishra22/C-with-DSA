#include<iostream>
using namespace std;
int bits(int a){
    int ans = 0;
    while(a!=0){
        int digit = a&1;
        ans = ans +digit;
        a = a>>1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int f;
    cin>>f;
    int a = bits(n);
    int b = bits(f);
    cout<<" Total bits "<<a+b<<endl;
    return 0;

}