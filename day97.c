#include <stdio.h>

int gcd_recursive(int a, int b) {
    if(b == 0) return a;
    return gcd_recursive(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    if(a == 0 && b == 0) {
        printf("GCD undefined for 0 and 0\n");
        return 0;
    }
    int g = gcd_recursive(a, b);
    printf("GCD = %d\n", g);
    return 0;
}