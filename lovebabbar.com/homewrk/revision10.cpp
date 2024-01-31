#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int column = 1;
        while(column<=n){
            cout<<column;
            column = column + 1;
        }
        row = row + 1;
        cout<<endl;
    }    
    return 0;
}
