#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int row =0;
    while(row<=n){
        int column = 0;
        while(column<=n){
            cout<<" * ";
            column = column +1;
        }
        cout<<endl;
        row += 1;
    }
    return 0;
}