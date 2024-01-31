#include<iostream>
using namespace std;
int main (){
    int a = 1;
    double d = 1.90;
    float f = 1.3;
    char ch = 'V';
    int sizeinteger = sizeof(a),sizedouble =  sizeof(d), sizefloat = sizeof(f),sizechar = sizeof(ch);
    cout<<"size of an integer is"<<sizeinteger<<endl;
    cout<<"size of a double"<<sizedouble<<endl;
    cout<<"size of a float"<<sizefloat<<endl;
    cout<<"size of a char"<<sizechar<<endl;
}