#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2], i, j, k;

    printf("Enter 4 elements for Matrix A:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter 4 elements for Matrix B:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++) {
            c[i][j] = 0;
            for(k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Product Matrix (A x B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
