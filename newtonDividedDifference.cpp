#include <bits/stdc++.h>
using namespace std;

double f[10][10];
void display(int n)
{
    for(int i=0 ;i<n ;i++)
    {
        for(int j=0 ;j<n ;j++)
        {
            cout<<f[i][j]<<"  " ;
        }
        cout<<endl ;
    }
}

int main()
{
    // Example data points
    double x[] = {1, 2, 3, 4};
    double y[] = {2, 3, 7, 14};
    int n = sizeof(x) / sizeof(x[0]);

    // Two-dimensional array to store divided differences


    // Initializing the divided difference table
    for (int i = 0; i < n; i++)
        f[i][0] = y[i];

        display(n);
        cout<<endl ;

    // Populating the divided difference table
    for (int j = 1; j < n; j++)
    {
        for (int i = j; i < n; i++)
        {
            f[i][j] = (f[i][j - 1] - f[i - 1][j - 1]) / (x[i] - x[i - j]);
        }
    }

      display(n);
      cout<<endl ;
    // Interpolated polynomial
    cout << "f(x) = " << f[0][0] << " ";
    for (int i = 1; i < n; i++)
    {
        cout << "+ (" << f[i][i] << ")";
        for (int j = 0; j < i; j++)
            cout << "(x - " << x[j] << ")";
    }

    return 0;
}
