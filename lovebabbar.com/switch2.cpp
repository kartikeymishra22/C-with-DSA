#include<iostream>
using namespace std;
int main (){
    int amount;
    cout<<"Enter the value of amount"<<endl;
    cin>>amount;
    int count = 1;
    switch(count){
        //case 1 : cout<< ( amount/1oo ) <<endl;
                // amount = amount%100;
        case 2 : cout<<"amount/50"<<endl;
                 amount = amount%50;
        case 3 : cout<<"amount/20"<<endl;
                 amount = amount%20;
        case 4 : cout<<"amount/10"<<endl;
                 
                 break;                    
    }
}