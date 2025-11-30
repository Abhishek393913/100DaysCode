#include <stdio.h>

int g = 50;

void showLocal() {
    int x = 10;
    printf("Local x inside function = %d\n", x);
    printf("Global g inside function = %d\n", g);
}

int main() {
    showLocal();
    printf("Global g inside main = %d\n", g);
    return 0;
}