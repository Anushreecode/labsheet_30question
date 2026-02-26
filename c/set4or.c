#include <stdio.h>

int main() {
    int number;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &number);

    ptr = &number;

    printf("\nMultiplication Table of %d:\n", *ptr);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", *ptr, i, (*ptr) * i);
    }

    return 0;
}