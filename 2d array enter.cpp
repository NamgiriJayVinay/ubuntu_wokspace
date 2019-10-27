#include<iostream>
using namespace std;
int main()
{
  int i,j;
  int n,m;
  cout<<"Enter number of rows: "<<endl;
  cin>>n;
  cout<<"Enter number of coloumns: "<<endl;
  cin>>m;
  int a[n][m];
  for(i=0; i<n; i++)
  {
    for(j=0; j<m; j++)
  {
    cout<<"Enter element"<<i+1<<":"<<j+1<<endl;
    cin>>a[i][j];
  }
  }
  cout<<" 2d Array is :\n"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
        cout<<endl;
    }
    cout<<" transposed array is :\n"<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            {
                cout<<a[j][i]<<" ";
            }
        cout<<endl;
    }

  return 0;
}
