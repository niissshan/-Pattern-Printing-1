

#include<iostream>
using namespace std;

int main()
{
    int i, j;
    int m, n;
    cout << "Enter number of rows and columns" << endl;
    cin >> m >> n;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            
            if (i == 1 || i == m || j == 1 || j == (n/2))
                cout <<"*";
            else
                cout <<" ";
        }
        cout << endl;
    }

    
}
