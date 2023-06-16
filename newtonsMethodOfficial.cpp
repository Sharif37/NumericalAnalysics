#include <iostream>
#include <cmath>

using namespace std;

// Function for which we want to find the root
double f(double x) {
    return x*x*x+x-1 ;
}

// Derivative of the function
double df(double x) {
    return 3*x*x +1;
}

int main() {
    double x0, x1;
    double precision = 0.0001; // desired precision
    int maxIter = 100; // maximum number of iterations

    cout << "Enter initial guess: ";
    cin >> x0;

    // Iterate until maximum number of iterations or desired precision is reached
    for (int i = 0; i < maxIter; i++) {
        x1 = x0 - f(x0)/df(x0);
        if (fabs(x1-x0) < precision) {
            cout << "Root found at: " << x1 << endl;
            return 0;
        }
        x0 = x1;
    }
    cout << "The method failed after " << maxIter << " iterations" << endl;
    return 0;
}
