#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter coordinates of point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of point 3 (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Check collinearity using area of triangle method
    // Area = 0 means points are collinear
    float area = (x1 * (y2 - y3) +
                  x2 * (y3 - y1) +
                  x3 * (y1 - y2)) / 2;

    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}