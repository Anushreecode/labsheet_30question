#include <stdio.h>

int main()
{
    int principle = 100;
    int time = 2;
    int rate = 8;
    int intrest = 0;

    int *p1 = &principle;
    int *p2 = &time;
    int *p3 = &rate;
    int *p4 = &intrest;

    *p4 = (*p1 * *p2 * *p3) / 100;

    printf("%d", *p4);
}
