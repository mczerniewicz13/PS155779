#include <stdio.h>
#include <stdlib.h>
void foo(int tab[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            tab[i][j]=0;
        }
    }
}
int main()
{
    int tab[5][100];
    foo(tab,5);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<100;j++)
        {
            printf("[%d %d]=%d\n",i,j,tab[i][j]);
        }
    }


    return 0;
}
