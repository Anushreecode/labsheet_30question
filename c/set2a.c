#include <stdio.h>

// User-defined function with parameter
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm, i;

    for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() { 
    printFibonacci(5);  
    return 0;
}