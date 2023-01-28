#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    // Define the function you want to solve here
    return pow(x,3)-2*sin(x);
}

double secant(double x0, double x1, double tolerance, int maxIterations) {
    // Initialize variables
    double x2 = 0;
    double f0 = f(x0);
    cout<<"f0="<<f0<<endl ;
    double f1 = f(x1);
     cout<<"f1="<<f1<<endl ;
    int i = 2;
    // Implement the secant method
    while(i <= maxIterations) {
        x2 = x1 - (f1*(x1-x0)) / (f1 - f0);
        if(abs(x2 - x1) < tolerance) {
            return x2;
        }
        x0 = x1;
        x1 = x2;
        f0 = f1;
        f1 = f(x2);
        i++;
    }
    cout << "Maximum number of iterations reached" << endl;
    return x2;
}

int main() {
    double x0 = 0.5;
    double x1 = 1.5;
    double tolerance = 0.00001;
    int maxIterations = 100;
    cout << "The solution is approximately x = " << secant(x0, x1, tolerance, maxIterations) << endl;
    return 0;
}
