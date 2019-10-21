#include<iostream>
using namespace std;
int main()
{
  int n,i;
  int a[n];
  cout<<"Enter number of elements:  "<<endl;
  cin>>n;
  cout<<"Enter "<<n<<"elements: "<<endl;
  for (i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Elements entered are as follows:"<<endl;
  for (i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
