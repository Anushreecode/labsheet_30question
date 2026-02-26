#include <stdio.h>


int main()
{
int a = 8;
int b = 7;
int sum = 0;
int *p1= &a;
int *p2= &b;
int *p3= &sum;
*p3=*p1+*p2;
printf("%d",*p3);




}