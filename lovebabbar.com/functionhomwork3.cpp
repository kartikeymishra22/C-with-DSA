#include<iostream>
using namespace std;
int fibo(int n){
    int a = 0;
    int b = 1;
    int ans = 0;
    for(int i = 1;i<n;i++){
        //cout<<ans<<endl;
        ans = a + b;
        b =a;
        a = ans;
    }
    //cout<<" Final answer is "<<ans<<endl;
    return ans;
}
int main (){
    int n;
    cin >>n;
    cout<<" output of given number "<<fibo(n)<<endl;
    return 0 ;
}