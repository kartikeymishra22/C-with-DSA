#include<iostream>
using namespace std;

class Hero{

    private:
    int Health;

    public:
    
    int getHealth()
    {
        return Health;
    }

    void setHealth(int h)
    {
        Health = h;
    }

};

int main()
{
    Hero h1;

    cout<<"Health is "<<h1.getHealth()<<endl;

    h1.setHealth(70);

    cout<<"Health is "<<h1.getHealth()<<endl;
}