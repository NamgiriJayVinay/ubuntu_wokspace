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

  return 0;
}
