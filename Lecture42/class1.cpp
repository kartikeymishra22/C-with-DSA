#include<iostream>
using namespace std;

class Hero{

    private:
    int health;
    char Level;

    public:

    int getHealth(){
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

};

int main()
{
    Hero Ramesh;

    cout<<"Health is "<<Ramesh.getHealth() <<endl;
    
  //prints health of the hero as it was when we called getHealth function.;
    
    Ramesh.setHealth(70);

    cout<<"Health is "<<Ramesh.getHealth()<<endl;


}