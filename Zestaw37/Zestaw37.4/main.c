#include <stdio.h>
#include <stdlib.h>

double foo2(double n)
{
    return n=2*n*n+5;
}
int foo(double *wsk_foo2(double n),double x, double y)
{
    if(*wsk_foo2(x)==*wsk_foo2(y))
    {
        return 1;

    }
    return -1;
}

int main()
{   double x = 5;
    double y = -5;
    double n = 0;
    double (*wsk)(double n) = foo2;
    //wsk = foo2;
    printf("%d",foo(wsk,x,y));
    return 0;
}
