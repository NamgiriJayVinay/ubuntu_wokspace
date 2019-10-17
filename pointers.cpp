#include<iostream>
using namespace std;
int main()
{
  int a=5;
  int *p;
  double *q;
  float *r;
  char *s;
  p=&a;
  cout<< "Variable value :  " <<a<<endl;
  cout<< "Address in pointer" <<p<<endl;
  cout<<"Pointer pointing to value"<<*p<<endl;

  return 0;
}
