#include<iostream>
using namespace std;
class blogger
{
    public:
    void sitedeveloper(){cout<<"He is a web developer"<<endl;}
};

class student
{
    public:
    void studies(){cout<<"He is a CSE student"<<endl;}
};

class Jay:public blogger,public student
{
    public:
    void human(){cout<<"He is a boy"<<endl;}
};
int main()
{
Jay obj1;
obj1.human();
obj1.studies();
obj1.sitedeveloper();
  return 0;
}
