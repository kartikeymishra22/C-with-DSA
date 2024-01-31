#include<iostream>
using namespace std;
int main (){
    int z;
    cin>>z;
    int row = 1;
    while(row<=z){
        int column = 1 ;
        while(column<=row){
            char ch = 'A'+row - 1;
            cout<<ch<<" ";
            column = column + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}