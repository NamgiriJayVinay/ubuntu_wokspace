#include<iostream>
using namespace std;
int main()
{
  int a=5;
  int *ptr;// * decodes the address from the varialbe
  ptr=&a;//& pulls out the address from the variable
  cout<< "address:  " <<ptr<<endl;
  cout<< "value " <<*ptr<<endl;
  int j=25;
  int *p;
  p=&j;
  cout<<p<<endl;//p is just an address without *

  //-------------below is new way------------------//
  cout<<"-------------below is new way------------------"<<endl;
  int *pointer;
  pointer=new int;
  *pointer=24;
  cout<<pointer<<endl;//address
  cout<<*pointer<<endl;//value
  delete pointer;//removes allocated memory
  return 0;
}
