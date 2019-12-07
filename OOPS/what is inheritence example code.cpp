#include<iostream>
using namespace std;
class animal{
    public:
        void eat(){cout<<"Eats"<<endl;}
        void walk(){cout<<"walks"<<endl;}
};

class cat: public animal
{
    public:
        void talk()
        {
            cout<<"mioooo"<<endl;
        }
};

class dog:public animal
{
    public :
    void talk()
    {
        cout<<"bowwwww"<<endl;
    }
};

class dinosuar:public animal
{
    public:
    void talk()
    {
        cout<<"haaaaooooo"<<endl;
    }
};
int main()
{
    dog d1;
    cat c1;
    dinosuar dino1;
    d1.eat();
    c1.eat();
    dino1.walk();
    return 0;
}
