#include<iostream>
using namespace std;
class animal
{
    public:
    void food(){cout<<"it eats food for survival"<<endl;}
};
class cat:public animal
{
    public:
    void legs(){cout<<"it has 4 legs"<<endl;}
};
class kitten:public cat
{
    public:
    void offspring(){cout<<"it is a baby"<<endl;}
};
int main()
{
    animal a1;
    a1.food();
    cat c1;
    c1.food();
    c1.legs();
    kitten k1;
    k1.food();
    k1.legs();
    k1.offspring();
}
