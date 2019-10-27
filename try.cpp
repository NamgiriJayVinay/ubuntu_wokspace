#include <iostream>
using namespace std;

int main()
{

    // Array declaration and initialization
    int N,M;
    cout<<"Enter rows"<<endl;
    cin>>N;
    cout<<"Enter colo"<<endl;
    cin>>M;

    int arr[100][100];
    // Iterate over the array
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout<<"Enter element"<<arr[i][j];
            cin>>arr[i][j];
        }
        // Print new line character after the row is printed in above loop
        cout << endl;
    }/*
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            // Print out each element
            cout<<arr[j][i];
        }
        // Print new line character after the row is printed in above loop
        cout << endl;
    }*/
    return 0;
}
