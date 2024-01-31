#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<" Enter the Note"<<endl;
    cin>>n;
    int ans1,ans2,ans3,ans4,ans5;
    int c = 1;
    switch(c){
        case 1:
        ans1 = n/10;
        cout<<" 100s "<<ans1<<endl;
        ans1= n%100;
        case 2:
        ans2 = ans1/100;
        cout<<" 50s "<<ans2<<endl;
        ans2 = ans1%50;
        case 3:
        ans3 = ans2/20;
        cout<<" 20s "<<ans3<<endl;
        ans3 = ans2%20;
        case 4:
        ans4 = ans3/10;
        cout<<" 10s "<<ans4<<endl;
        ans4 = ans3%10;
        case 5:
        ans5 = ans4/1;
        cout<<" 1s "<<ans5<<endl;
        ans5 = ans4%1;
        break;
    }
}