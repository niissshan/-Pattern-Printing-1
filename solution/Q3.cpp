
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}