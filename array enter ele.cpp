#include<iostream>
using namespace std;
int main()
{
  int i,n;

  cout<<"Enter number of elements: "<<endl;
  cin>>n;
  int a[n];
  for(i=0; i<n; i++)
  {
    cout<<"Enter element "<<i+1<<": "<<endl;
    cin>>a[i];
  }
  cout<<"Array is :\n"<<endl;
  for(i=0; i<n; i++)
  {
    cout<<a[i]<<"|";
  }
}
