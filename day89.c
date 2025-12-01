#include <stdio.h>

int main() {
    int i, n;
    float sum = 0, avg, num;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}