#include<iostream>
using namespace std;
int main (){
    int n ;
    cin>>n;
    int row = 1 ;
    int count = 1;
    while(row<=n){
        int column = 1;
        while(column<=n){
            cout<<count<<" ";
            count = count +1;
            column = column + 1;
        }
        row = row + 1;
        cout<<endl;
    }
    return 0;
}
