#include <stdio.h>
#include <stdlib.h>
void d7(int n,double tab[n])
{
    printf("=================\n");
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            printf("tab[%d]= %lf\n",i,tab[i]*tab[i]);
        }
    }
}
int main()
{
    double tab[5];
    for(int i=0;i<5;i++)
    {
        printf("\ntab[%d]: ",i);
        scanf("%lf",&tab[i]);
    }
    d7(5,tab);
    return 0;
}
