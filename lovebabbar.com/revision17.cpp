#include<iostream>
using namespace std;
 bool isPrime(int num){
    bool flag = true;
    for(int i = 2;i<=num/2;i++){
        if(num%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    int num;
    cin>>num;
    bool flag;
    flag = isPrime( num );
    if(flag == true){
        cout<<"not a Prime Number"<<endl;
    }
    else {
        cout<<"Prime Number"<<endl;
    }
    return 0;
}