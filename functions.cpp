#include<iostream>
using namespace std;
int maximum(int x,int y)
 {
  if (x>y)
      return x;
  else
      return y;
 }



int main()
{
  int a,b;
  cout<<"Enter 2 numbbers:  "<<endl;
  cin>>a>>b;
  int c=maximum(a,b);
  cout<<"Greater number is: "<<c<<endl;
  cout<<"Another greter num among 10 and 20 :"<<maximum(10,20);
  return 0;
}
