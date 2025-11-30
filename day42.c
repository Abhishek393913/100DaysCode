#include <stdio.h>

int main() {
    int a, b, c, d;
    int limit = 5;
    int num;

    printf("Ramanujan Numbers up to limit %d:\n", limit);

    for(a = 1; a <= limit; a++) {
        for(b = 1; b <= limit; b++) {

            num = a*a*a + b*b*b;

            for(c = a + 1; c <= limit; c++) {
                for(d = 1; d <= limit; d++) {

                    if(c*c*c + d*d*d == num) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               num, a, b, c, d);
                    }

                }
            }

        }
    }

    return 0;
}