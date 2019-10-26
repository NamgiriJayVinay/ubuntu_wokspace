#include<iostream>
using namespace std;
int add(int x,int y)
{
  cout<<"Funtion integer"<<endl;
  return(x+y);
}
double add(double x,double y)
{
  cout<<"Funtion double"<<endl;
  return(x+y);
}
int main()
{
  int a,b;
  cout<<"-----Sum is------"<<endl;
  cout<<add(5,10);
  cout<<add(5.5,10.5);
  return 0;
}
