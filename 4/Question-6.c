// Find the Maximum value of an Array

#include <stdio.h>

int main() {
    int a[5], i, max;
    printf("Enter 5 array values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i = 1; i < 5; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    printf("Maximum value = %d\n", max);
    return 0;
}
