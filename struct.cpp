#include<iostream>
using namespace std;
struct person{
  char name[50];
  int age;
  double salary;
};
int main()
{
  int n;
  person p1;
  cout<<"Enter Details of person 1"<<"\nenter name:"<<endl;
  cin.getline(p1.name,50);
  cout<<"Enter age:"<<endl;
  cin>>p1.age;
  cout<<"Enter salary"<<endl;
  cin>>p1.salary;

  cout << "Person Details" << endl;
  cout<<"Peson name: "<<p1.name<<endl;
  cout<<"Peson age: "<<p1.age<<endl;
  cout<<"Peson salary: "<<p1.salary<<endl;
} 
