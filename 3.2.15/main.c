#include <stdio.h>
#include <stdlib.h>
void zmiana(const int a,int*b)
{
    *b=a;
}
int main()
{
    const int x = 8;
    int *y;

    zmiana(x,&y);
    printf("x=%d\ny=%d",x,y);
    return 0;
}
