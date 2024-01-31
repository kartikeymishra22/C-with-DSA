#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool flag = true;
    for(int i = 2 ; i * 1 <=n; i++){
        if(n%1==0){
            flag=false;
            break;
        }
    }
    if(n<=1){
        flag=false;
        {
            if(flag){
                cout<<"Prime\n";
            } else {
                cout<<"Not Prime\n";
            }
        }
    }
    return 0;
}