#include<iostream>
using namespace std;
inline int add(int x,int y)
 {
  return(x+y);
 }
int main()
{
  int a,b;
  cout<<"Enter 2 numbbers:  "<<endl;
  cin>>a>>b;
  cout<<"sum is: "<<add(a,b)<<endl;
  return 0;
}
