#include <stdio.h>

long long fact_recursive(int n) {
    if (n <= 1) return 1;
    return n * fact_recursive(n - 1);
}
long long fact_iter(int n) {
    long long f;
    int i;      
    f = 1;
    for (i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}
int main() {
    int n, r;
    long long fr, fi, nCr, fr_r, fr_n_r;
    printf("Enter n and r: ");
    if (scanf("%d %d", &n, &r) != 2) {
        printf("Invalid input\n");
        return 0;
    }
    if (r < 0 || r > n) {
        printf("Invalid r\n");
        return 0;
    }
    fr = fact_recursive(n);
    fi = fact_iter(n);
    fr_r = fact_iter(r);
    fr_n_r = fact_iter(n - r);
    if (fr_r == 0 || fr_n_r == 0) {
        printf("Error computing factorials\n");
        return 0;
    }
    nCr = fact_iter(n) / (fr_r * fr_n_r);
    printf("Recursive factorial of %d = %lld\n", n, fr);
    printf("Iterative factorial of %d = %lld\n", n, fi);
    printf("nCr (C(%d,%d)) = %lld\n", n, r, nCr);

    return 0;
}