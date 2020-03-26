#include <stdio.h>
#include <stdlib.h>
int suma(const int*a,const int*b)
{
    int sum = *a + *b;
    return sum;
}
int main()
{
    int x = 5;
    int y = 8;
    printf("%d",suma(&x,&y));
    return 0;
}
