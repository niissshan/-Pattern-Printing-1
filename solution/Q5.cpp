
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    for(i=1; i<=n ; i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }
    int m=n-1;
    for(i=1; i<=m ; i++)
    {
        for(j=1;j<=m-i+1;j++)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }
}