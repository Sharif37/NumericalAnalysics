#include <iostream>
#include <cmath>
using namespace std;

double g(double x) {
    // Define the function you want to solve here
    return 2.8*x-x*x ;
}

double fixedPoint(double x0, double tolerance, int maxIterations) {
    // Initialize variables
    double x1 = 0;
    int i = 1;
    // Implement the fixed point iteration method
    while(i <= maxIterations) {
        x1 = g(x0);
        if(abs(x1 - x0) < tolerance) {
            return x1;
        }
        x0 = x1;
        i++;
    }
    cout << "Maximum number of iterations reached" << endl;
    return x1;
}

int main() {
    double x0 = 1;
    double tolerance = 0.0001;
    int maxIterations = 100;
    cout << "The solution is approximately x = " << fixedPoint(x0, tolerance, maxIterations) << endl;
    return 0;
}
