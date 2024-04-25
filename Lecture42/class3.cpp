#include<iostream>
using namespace std;

class Hero{

    private:
    int health;
    char level;

    public:

    int gethealth()
    {
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level =ch;
    }
};

int main()
{
    Hero ramesh;
    //Static allocation
    ramesh.sethealth(80);
    ramesh.setlevel('v');

    cout<<"Health is "<<ramesh.gethealth()<<endl;
    cout<<"level is "<<ramesh.getlevel()<<endl;

    // Dynamic allocation

    Hero *b = new Hero;
    b->sethealth(70);
    b->setlevel('A');

    cout<<"Health is "<<(*b).gethealth()<<endl;
    cout<<"Level is "<<(*b).getlevel()<<endl;

    cout<<"Health is "<<b->gethealth()<<endl;
    cout<<"Level is "<<b->getlevel()<<endl;
}