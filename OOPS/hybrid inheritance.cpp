#include<iostream>
using namespace std;
class student
{
    public:
    void studying(){cout<<"I am studying"<<endl;}
};
class male
{
    public:
    void malestudent()
    {
        cout<<"He is male"<<endl;
    }
};
class female
{
 public:
 void femalegirl()
 {
    cout<<"She is female"<<endl;
 }

};
class boy:public student,public male
{
 public:
 void boystudent()
 {
    cout<<"he is a boy"<<endl;
 }
};
class girl:public student,public female
{
    public:
    void girlstudent()
    {
        cout<<"She is a girl"<<endl;
    }
};
int main()
{
    boy ram;
    ram.studying();
    ram.boystudent();
    ram.malestudent();
    girl sita;
    sita.studying();
    sita.femalegirl();
    sita.girlstudent();
}
