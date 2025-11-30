#include <stdio.h>

int main() {
    int a = 5;
    printf("Outside block, a = %d\n", a);
    {
        int a = 20;
        printf("Inside block, a = %d\n", a);
    }
    printf("After block, a = %d\n", a);
    return 0;
}