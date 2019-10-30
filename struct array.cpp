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
  int n;
  cout<<"Enter number of students:  "<<endl;
  cin>>n;
  student s[n];
  for(int i=0;i<n;i++)
  {
      cout<<"Enter detailes of person"<<i+1<<endl;
      cin>>s[i].roll;
      cin>>s[i].name;
      cin>>s[i].percent;
  }

  for(int i=0;i<n;i++)
  {
      cout<<"\n------Detailes of person: "<<i+1<<"--------"<<endl;
      cout<<"\nRoll number:"<<s[i].roll;
      cout<<"\nName :"<<s[i].name;
      cout<<"\nPercentage:"<<s[i].percent;
  }
  return 0;
}
