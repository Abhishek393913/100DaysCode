#include <stdio.h>

int main() {
    int a[50];
    int n, i, key;
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter number to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) count++;
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}