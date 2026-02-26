#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr;
    int sum = 0;

    ptr = numbers; 

    printf("Enter 10 numbers:\n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", (ptr + i));  // Using pointer to store values
    }

    for(int i = 0; i < 10; i++) {
        sum += *(ptr + i);  // Dereferencing pointer to calculate sum
       
    }

    printf("Sum of the numbers = %d\n", sum);

    return 0;
}