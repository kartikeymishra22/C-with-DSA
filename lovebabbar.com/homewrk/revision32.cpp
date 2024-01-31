#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = n - row + 1;
        while(space<=n){
            cout<<" ";
            space = space + 1;
        }
        int column = 1;
        while(column<=n-row+1){
            int count = n + row - 4;
            cout<<count;
            count = count + 1;
            column = column + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}