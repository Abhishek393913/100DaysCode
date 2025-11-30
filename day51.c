#include <stdio.h>

int main() {
    int a[50];
    int n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    if(n < 2) {
        printf("Not enough elements for second largest\n");
        return 0;
    }

    largest = second = -2147483648; /* very small */

    for(i = 0; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    if(second == -2147483648)
        printf("No distinct second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}