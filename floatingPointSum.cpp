#include<bits/stdc++.h>
using namespace std ;
double sum_numbers(const double numbers[], size_t size) {
    double sum = 0;
    // use double type to store the sum
    // this will give more precision than float
    for (size_t i = 0; i < size; i++) {
        double next_number = numbers[i];
        double temp_sum = sum + next_number;
        // using a temporary variable to hold the new sum
        if (fabs(sum) >= fabs(next_number)) {
            // check for rounding errors
            sum = temp_sum;
        } else {
            sum = next_number;
        }
    }
    return sum;
}

int main(void) {
    double numbers[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    double sum = sum_numbers(numbers, size);
    printf("Sum of the numbers: %lf\n", sum);
    return 0;
}
