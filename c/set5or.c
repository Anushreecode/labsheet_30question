#include <stdio.h>

int main() {
    int arr[10];
    int *ptr;
    int i;

    ptr = arr;  

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", ptr + i);
    }

    printf("\nThe numbers you entered are:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}