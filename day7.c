#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check for validity of triangle
    if (a + b > c && b + c > a && c + a > b) {
        printf("Triangle is valid.\n");

        // Check for equilateral
        if (a == b && b == c) {
            printf("Triangle is Equilateral.\n");
        }
        // Check for isosceles
        else if (a == b || b == c || c == a) {
            printf("Triangle is Isosceles.\n");
        }
        // Check for right-angled triangle
        else if ((a * a == b * b + c * c) ||
                 (b * b == a * a + c * c) ||
                 (c * c == a * a + b * b)) {
            printf("Triangle is Right-angled.\n");
        }
        // If none of the above, it is scalene
        else {
            printf("Triangle is Scalene.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}