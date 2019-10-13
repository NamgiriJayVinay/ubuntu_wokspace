#include<iostream>
using namespace std;
int main()
{
  int a,i,n1=0,n2=1,n3;
  cout<<"Enter number of elements:  "<<endl;
  cin>>a;
  cout<<" "<<n1<<" "<<n2;
  for(i=3;i<a;++i)
  {
    n3=n2+n1;
    cout<<" "<<n3<<" ";
    n1=n2;
    n2=n3;
  }

  return 0;
}
