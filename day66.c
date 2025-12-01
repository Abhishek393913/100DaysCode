#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {
        case 1:
            result = a + b;
            printf("Result = %f", result);
            break;
        case 2:
            result = a - b;
            printf("Result = %f", result);
            break;
        case 3:
            result = a * b;
            printf("Result = %f", result);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}