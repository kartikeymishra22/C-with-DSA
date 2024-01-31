#include<iostream>
using namespace std;
int main (){
    int n ;
    cin>>n;
    int row = 1;
     int toPrint = 1;
     while(row<=n){
        int column = 1, space = 1;
        while(space<=n - row){
            cout<<"  ";
            space += 1;
        }
        while(column<=row){
            cout<<toPrint<<" ";
            toPrint +=1;
            column +=1;
        }
        cout<<endl;
        row +=1;
     }
     return 0;
}