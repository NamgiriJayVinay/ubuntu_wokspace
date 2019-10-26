#include<iostream>
using namespace std;
int main()
{
  int n,i;
  int arr[n];
  cout<<"Enter number of elements:  "<<endl;
  cin>>n;
  for (i=0;i<n;i++){
    cout<<"Enter element "<<i<<":"<<endl;
    cin>>arr[i];
  }
  cout<<"ARRAY ELEMENTS ARE-----"<<endl;
  for (i=0;i<n;i++){
    cout<<arr[i]<<"-";
  }


}
