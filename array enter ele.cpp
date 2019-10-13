#include<iostream>
using namespace std;
int main()
{
  int a[20],i,n;
  cout<<"Enter number of elements: "<<endl<<;
  cin>>n;
  for(i=0; i<n; i++)
  {
    cout<<"Enter element "<<i<<": "<<endl<<;
    cin>>a[i];
  }
  cout<<"Array is :\n";
  for(i=0; i<n; i++)
  {
    cout<<a[i]<<"|"<<endl<<;
  }
}
