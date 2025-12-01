#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    long result;

    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    result = pow(a, b);

    printf("Result = %ld", result);

    return 0;
}