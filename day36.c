#include <stdio.h>

int main() {
    int ia[3] = {10, 20, 30};
    float fa[3] = {1.1f, 2.2f, 3.3f};
    char ca[3] = {'A', 'B', 'C'};

    int *pi = ia;
    float *pf = fa;
    char *pc = ca;

    int i;

    printf("Integer array addresses and values:\n");
    for(i = 0; i < 3; i++) {
        printf("%p -> %d\n", (void*)pi, *pi);
        pi++;
    }

    printf("\nFloat array addresses and values:\n");
    for(i = 0; i < 3; i++) {
        printf("%p -> %.2f\n", (void*)pf, *pf);
        pf++;
    }

    printf("\nChar array addresses and values:\n");
    for(i = 0; i < 3; i++) {
        printf("%p -> %c\n", (void*)pc, *pc);
        pc++;
    }

    return 0;
}