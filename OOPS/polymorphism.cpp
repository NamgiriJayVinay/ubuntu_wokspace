#include<iostream>
using namespace std;
class test
{
    public:
    void fun(int)
    {
        cout<<"Integer"<<endl;
    }
    void fun(double)
    {
        cout<<"double"<<endl;
    }
};

int main()
{
    test obj1;
    obj1.fun(15);
    obj1.fun(13.22);
}
        
