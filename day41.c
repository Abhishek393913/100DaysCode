#include <stdio.h>

int main() {
    int year;
    float population = 100000;

    for(year = 1; year <= 10; year++) {
        population = population * 1.10;
        printf("Population at the end of year %d = %.2f\n", year, population);
    }

    return 0;
}