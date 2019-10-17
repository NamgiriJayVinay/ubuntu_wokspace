#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number: "<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    if (n%i=0)
    {
      cout<<"Factors of <<n<<"are"<<i<<;
    }
  }
  return 0;
}
