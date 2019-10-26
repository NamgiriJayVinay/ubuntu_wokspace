#include<iostream>
using namespace std;
  int main()
  {
    int *ptr;
    int n;
    cout<<"Enter number of elements : "<<endl;
    cin>>n;
    ptr=new int [n];
    for (int i=0;i<n;i++)
    {
      cout<<"Enter Element "<<i+1<<":";
      cin>>ptr[i];
    }
    cout<<"Array is:--------------"<<endl;
    for (int i=0;i<n;i++)
    {
      cout<<ptr[i]<<"|";
    }
    return 0;
  }
