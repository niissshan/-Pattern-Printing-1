

#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    for(i=1; i<=n; i++) 
    {
        for(j=1;j<=n-i;j++) // for spaces
        {
             cout<<" "; 
        }
        for(k=1;k<=n;k++) //for stars
        {
             cout<<"*";
          
        }
        
        cout<<endl;
    }
}