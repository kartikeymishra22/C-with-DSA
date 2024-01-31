#include<iostream>
using namespace std;
int main (){
    char a ;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    if (a>='a'&& a<='z'){
        cout<<"this is a lower case"<<endl;
    }
    else if (a>='A'&& a<='Z'){
        cout<<"this is a upper case"<<endl;

    }
    else if (a>='0' && a<= '9') {
        cout<<"this is a numeric case"<<endl;
    }
    return 0;
}