#include<bits/stdc++.h>
using namespace  std ;

double pairwise_sum(const double numbers[], size_t size) {
    double *temp = (double *) malloc(sizeof(double) * size);
    if (temp == NULL) {
        cout<<"error"<<endl ;
    }

    for (size_t i = 0; i < size; i++) {
        temp[i] = numbers[i];
    }

    while (size > 1) {
        size_t j = 0;
        for (size_t i = 0; i < size; i += 2, j++) {
            temp[j] = temp[i] + temp[i + 1];
        }
        size = (size + 1) / 2;
    }
    double result = temp[0];
    free(temp);
    return result;
}

int main(void) {
    double numbers[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    double sum = pairwise_sum(numbers, size);
    printf("Sum of the numbers: %lf\n", sum);
    return 0;
}

