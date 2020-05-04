#include <stdio.h>
#include <stdlib.h>
int (*foo(int n, int m))[]
{
    return malloc(n*sizeof(int[m]));

}
int main()
{
    int n = 3; int m = 5;
    int **tab=foo(n,m);
    *(tab)=12;
    printf("[%d,%d] = %d",0,0,*tab+0*m+0);

    return 0;
}
