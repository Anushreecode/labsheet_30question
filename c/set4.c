#include <stdio.h>

long factorial(int n) {
    if (n < 0) {
        return -1; 
    }
    
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        // fact=fact*i
    }
    
    return fact;
}

int main() {
    int number;
    long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    result = factorial(number);

    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", number, result);
    }

    return 0;
}