
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
           for(j=1;j<=i;j++)
          {
            cout<<j<<" ";
          }
        }
        if(i%2==0)
        {
           for(k=1;k<=i;k++)
          {
            cout<<char(k+64)<<" ";
          }
        }
        
        cout<<endl;
    }
}