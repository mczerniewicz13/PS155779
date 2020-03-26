#include <stdio.h>
#include <stdlib.h>
void zamiana(int*a,int*b)
{
    int pomoc = *a;
    *a=*b;
    *b=pomoc;
}
int main()
{
    int x = 5;
    int y = 6;
    int z = 4;
    zamiana(&x,&y);
    printf("x=%d\ny=%d\n",x,y);
    zamiana(&x,&z);
    printf("x=%d\nz=%d",x,z);
    return 0;
}
