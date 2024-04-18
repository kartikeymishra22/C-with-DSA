#include<iostream>
using namespace std;

class student{

    private:
        string name;
        int age;
        int rollno;
    
    public:
    int getAge()
    {
        return  this->age;
    }

};
int main ()
{
    student s1;

    cout<<"Sbb shi hai "<<endl;
    cout<<s1.getAge()<<endl;
}