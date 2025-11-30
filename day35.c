#include <stdio.h>

int main() {
    int a = 10;
    float b = 12.34f;
    char c = 'Z';

    int *pint = &a;
    float *pfloat = &b;
    char *pchar = &c;

    printf("Value of a = %d, Address = %p, pointer = %d\n", a, (void*)pint, *pint);
    printf("Value of b = %.2f, Address = %p, pointer = %.2f\n", b, (void*)pfloat, *pfloat);
    printf("Value of c = %c, Address = %p, pointer = %c\n", c, (void*)pchar, *pchar);
    
    return 0;
}