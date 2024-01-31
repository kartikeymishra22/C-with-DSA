#include<iostream>
using namespace std;
int main(){
    int SubtractProductAndsum(int n)
       int Product = 1, sum = 0;
       while(n){
        Product = Product*(n%10);
        sum += (n%10);
        n = n/10;
       } 
       return Product - sum;
    
}