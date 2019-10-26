#include<iostream>
using namespace std;
int main()
{
  int *pointer;
  pointer=new int;//or you cam just declare "new int(24)"
  *pointer=24;
  cout<<pointer<<endl;//address
  cout<<*pointer<<endl;//value
  delete pointer;//removes allocated memory
  cout<<pointer<<endl;
  return 0;
}
