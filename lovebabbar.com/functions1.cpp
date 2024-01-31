#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int i = 1;
    int ans = 1;
    for(i=1;i<=b;i++){
        ans = ans*a;
    }
        cout<<"answer is"<<ans<<endl;

}