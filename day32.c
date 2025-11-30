#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee e[100];
    int i, n;

    printf("Enter number of employees (<=100): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name and basic pay of employee %d: ", i + 1);
        scanf("%s %f", e[i].name, &e[i].basic);
        e[i].gross = e[i].basic + (0.52f * e[i].basic);
    }

    printf("Employee Name   Gross Salary\n");
    for(i = 0; i < n; i++) {
        printf("%s   %.2f\n", e[i].name, e[i].gross);
    }

    return 0;
}