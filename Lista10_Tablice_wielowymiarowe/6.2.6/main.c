#include <stdio.h>
#include <stdlib.h>
int (*foo(int n, int m,int k))[]
{
    return malloc(n*sizeof(int[m][k]));

}
void czysc(int n,int m,int k,int tab[][m][k])
{
    free(tab);
}
int main()
{
    int ***tab=foo(3,3,3);
    czysc(3,3,3,tab);
    return 0;
}
