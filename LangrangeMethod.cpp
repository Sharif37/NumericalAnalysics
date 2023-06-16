#include<bits/stdc++.h>
using namespace std;

double lagrange(double x, double x_values[], double y_values[], int n)
{
    double result = 0;
    for (int i = 0; i < n; i++)
    {
        double term = y_values[i];
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            term = term * (x - x_values[j]) / (x_values[i] - x_values[j]);
        }
        result += term;
    }
    return result;
}

int main()
{
    double x_values[] = {1};
    double y_values[] = {2};
    int n = sizeof(x_values) / sizeof(x_values[0]);
    double x = .1;
    cout << "Interpolated value at x = " << x << ": " << lagrange(x, x_values, y_values, n) << endl;
    return 0;
}

