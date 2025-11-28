#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, zero = 0;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        printf("Enter a number: ");

        if (scanf("%d", &n) != 1) {
            return 0; // Exit if invalid input
        }

        if (n > 0)
            pos++;
        else if (n < 0)
            neg++;
        else
            zero++;

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeros: %d\n", zero);

    return 0;
}