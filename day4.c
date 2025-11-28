#include <stdio.h>

int main() {
    float c;

    printf("Enter value of Celsius: ");
    scanf("%f", &c);

    float F = (c * 9.0 / 5) + 32;

    printf("The temperature in Fahrenheit is %f\n", F);
    return 0;
}