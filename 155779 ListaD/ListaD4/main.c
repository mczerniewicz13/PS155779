#include <stdio.h>
#include <stdlib.h>
double d4(double x)
{
    return 1/x;
}
int main()
{
    double a;
    double b;
    printf("a: ");
    scanf("%lf",&a);
    printf("\nb: ");
    scanf("%lf",&b);
    printf("\na = %lf",d4(a));
    printf("\nb = %lf",d4(b));
    return 0;
}
