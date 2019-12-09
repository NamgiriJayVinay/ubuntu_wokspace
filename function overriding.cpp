#include<iostream>
using namespace std;

class animal
{
public:
    void makesound()
    {
        cout<<"Animal makes sound"<<endl;
    }
};

class dog:public animal
{
public:
    void makesound()
    {
        cout<<"Dogs bark"<<endl;
    }
};

class cat:public animal
{
public:
    void makesound()
    {
        cout<<"Cats meow"<<endl;
    }
};

int main()
{
    animal obj1;
    obj1.makesound();
    dog obj2;
    obj2.makesound();
    cat obj3;
    obj3.makesound();
}
