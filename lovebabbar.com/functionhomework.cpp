#include<iostream>
using namespace std;
int fact(int n){
    int ans = 1;
    for(int i = 1;i<=n;i++){
        ans = (3*n)+7;
    }
    return ans;
}
int main (){
    int n;
    cin>>n;
    cout<<" answer is "<<fact(n)<<endl;
    return 0;
}