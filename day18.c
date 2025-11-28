#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5;

    for (i = 1; i <= n; i++) {
        for (space = n - i; space > 0; space--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}