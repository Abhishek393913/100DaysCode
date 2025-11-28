#include <stdio.h>

int main() {
    int i, j, k, n = 5;

    for (i = 0; i < n; i++) {

        for (k = 0; k < i; k++) {
            printf(" ");
        }

        for (j = n; j >= i + 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}