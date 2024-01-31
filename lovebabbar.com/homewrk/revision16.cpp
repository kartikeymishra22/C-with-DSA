#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int column = row;
        while(column<row+row){
            cout<<column<<" ";
            column = column +1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0 ;
}