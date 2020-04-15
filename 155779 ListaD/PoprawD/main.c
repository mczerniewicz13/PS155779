#include <stdio.h>
#include <stdlib.h>

int funkcja(int m)
{
    return m;
}

int main()
{
    int a=4;int b=5;
    int c=5,d=6;
    b=funkcja(c);
    funkcja(a);
    return 0;
}
