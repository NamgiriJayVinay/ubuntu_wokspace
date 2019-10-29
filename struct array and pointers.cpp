#include<iostream>
#include<string>
using namespace std;
struct student{
  int roll;
  string name;
  double percent;
};


int main()
{
  student s[4];
 // int n=4;
  for(int i=0;i<4;i++)
  {
      cout<<"Enter detailes of person"<<i+1<<endl;
      cin>>s[i].roll;
      cin>>s[i].name;
      cin>>s[i].percent;
  }

  for(int i=0;i<4;i++)
  {
      cout<<"\n------Detailes of person: "<<i+1<<"--------"<<endl;
      cout<<"\nRoll number:"<<s[i].roll;
      cout<<"\nName :"<<s[i].name;
      cout<<"\nPercentage:"<<s[i].percent;
  }
  return 0;
}
