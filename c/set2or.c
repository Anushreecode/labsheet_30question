#include <stdio.h>

int main()
{
    int num = 4;
    int *p1 = &num;

    if (*p1 % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
