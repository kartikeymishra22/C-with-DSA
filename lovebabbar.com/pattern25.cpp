#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int column= 1;
        int space = 1;
        while(space<row){
            cout<<" ";
            space = space +1;
        }
        while(column<=n - row + 1){
            cout<<row;
            column = column +1;
        }   
        cout<<endl;
        row = row +1;

    }
    return 0;
}