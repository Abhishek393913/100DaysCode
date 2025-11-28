#include <stdio.h>

int main() {
    int i, j, space, n = 5;

    for (i = n; i >= 1; i--) {

        // Print leading spaces
        for (space = 0; space < n - i; space++) {
            printf(" ");
        }

        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}