#include <iostream>
using namespace std;
void callbyvalue(int x,int y)
{
  int z=x;
      x=y;
      y=z;
}
void callbyreference(int &x,int &y)
{
  int z=x;
  x=y;
  y=z;
}int  main()
{
  int a=5,b=10;
  cout<<"-------:Before swaping:-----------"<<endl;
  cout<<"a : "<<a<<"\nb : "<<b<<endl;
  cout<<"-------:After swaping throgh call by value:-----------"<<endl;
  callbyvalue(a,b);
  cout<<"a : "<<a<<"\nb : "<<b<<endl;
  cout<<"-------:After swaping throgh call by reference:-----------"<<endl;
  callbyreference(a,b);
  cout<<"a : "<<a<<"\nb : "<<b<<endl;
  return 0;
}
