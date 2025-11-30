#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and cols of matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and cols of matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if(n != p) {
        printf("Matrix multiplication not possible (n != p)\n");
        return 0;
    }

    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B (%d x %d):\n", p, q);
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < m; i++)
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) printf("%d ", B[i][j]);
        printf("\n");
    }

    printf("Resultant Matrix (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}