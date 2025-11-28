#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double d = b * b - 4 * a * c;

    if (d >= 0) {
        double root1 = (-b + sqrt(d)) / (2 * a);
        double root2 = (-b - sqrt(d)) / (2 * a);

        printf("Root 1: %f\n", root1);
        printf("Root 2: %f\n", root2);
    } else {
        printf("Roots are complex and cannot be calculated using this program.\n");
    }

    return 0;
}