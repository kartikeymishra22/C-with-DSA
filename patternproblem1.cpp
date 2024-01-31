#include<iostream>
using namespace std;
int main() {
    int rows,columns;
    cout<<"Enter the Number of Rows :\n";
    cin>>rows;
    cout<<"Enter the Number of Columns :\n";
    cin>>columns;
    for ( int i = 1; i<= rows ; i++){
        for ( int j = 1; j <= columns; j++){
            cout<<"5";
        }
        cout<<endl;
    }
    return 0;
}