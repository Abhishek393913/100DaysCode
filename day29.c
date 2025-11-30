#include <stdio.h>

int fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num;
    int i;

    printf("Enter number of terms: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    if(num <= 0) {
        printf("No terms to show\n");
        return 0;
    }

    for(i = 0; i < num; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}