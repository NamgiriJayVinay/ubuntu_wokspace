#include<iostream>
#include<string>
using namespace std;

struct student{
  int roll;
  string name;
  double percent;
};


int main()
{
  student s1,s2;
  cout<<"Enter 1st student details"<<endl;
  cin>>s1.roll;
  cin>>s1.name;
  cin>>s1.percent;

  student *ptr=&s1;

  cout<<"Details of 1st student"<<endl;
  cout<<"Roll:  "<<ptr->roll<<endl;
  cout<<"Name:  "<<ptr->name<<endl;
  cout<<"Percentage:  "<<ptr->percent<<endl;

  student *ptr1=&s2;
    cout<<"Enter 2nd student details"<<endl;
  cin>>ptr1->roll;
  cin>>ptr1->name;
  cin>>ptr1->percent;
  cout<<"Details of 2nd student"<<endl;
  cout<<"Roll:  "<<ptr1->roll<<endl;
  cout<<"Name:  "<<ptr1->name<<endl;
  cout<<"Percentage:  "<<ptr1->percent<<endl;


  return 0;
}
