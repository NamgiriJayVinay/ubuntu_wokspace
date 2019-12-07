/*now Jay is sitedeveloper,works as web engineer
at the same time he works as full time cse student,then how will you show that in code*/
/*Ambigious problem overcome*/

#include<iostream>
using namespace std;
class blogger
{
    public:
    void sitedeveloper(){cout<<"He is a web developer"<<endl;}
    void work(){cout<<"works as web engeneer"<<endl;}
};

class student
{
    public:
    void studies(){cout<<"He is a CSE student"<<endl;}
    void work(){cout<<"full time cse student"<<endl;}
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
//obj1.work();   //compiler gives out error as it dont know which work to call since there are 2 work functions
obj1.student::work();
obj1.blogger::work();
  return 0;
}
