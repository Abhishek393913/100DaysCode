#include <stdio.h>

int g = 10;

void fun1() {
    printf("Inside fun1, g = %d\n", g);
}

void fun2() {
    g = g + 5;
    printf("Inside fun2, g = %d\n", g);
}

int main() {
    printf("In main, g = %d\n", g);
    fun1();
    fun2();
    printf("After fun2, g = %d\n", g);
    return 0;
}