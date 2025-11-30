#include <stdio.h>

void counter() {
    static int s = 0;
    s = s + 1;
    printf("s = %d\n", s);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}