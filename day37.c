include <stdio.h>

void swap_and_inc(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
    *x = *x + 1;
    *y = *y + 1;
}

int main() {
    int p = 5;
    int q = 9;

    printf("Before: p = %d, q = %d\n", p, q);
    swap_and_inc(&p, &q);
    printf("After : p = %d, q = %d\n", p, q);

    return 0;
}