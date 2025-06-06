// Add two Matrices

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("Enter elements for 1st 2x2 Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for 2nd 2x2 Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
