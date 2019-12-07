#include<iostream>
using namespace std;
class vehicle
{
    public:
    void driver(){cout<<"driver is required"<<endl;}
};
class car:public vehicle
{
    public:
    void tires(){cout<<"there are 4 tyres"<<endl;}
};
int main()
{
    car c1;
    c1.tires();
    c1.driver();
}
