#include <stdio.h>
#include <stdlib.h>
int foo(int n, int m, int **tab[n][m])
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                suma+=(*(*(tab+i)+j);
            }

        }
    }
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            if(k+l==m)
            {
                suma+=*(*(tab+k)+l);
            }

        }
    }
    return suma;


}
int main()
{
    int n=3;
    int m=4;
    int **tab = malloc(n*sizeof(int*));
    *tab = malloc(m*sizeof(int));
    *(tab+1) = malloc(m*sizeof(int));
    *(tab+2) = malloc(m*sizeof(int));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=i+j+2;
        }
    }
     for(int k=0;k<n;k++)
    {
        printf("|");
        for(int l=0;l<m;l++)
        {
            printf("%d,",*(*(tab+k)+l));
        }
        printf("|\n");
    }
    int wynik =foo(n,m,tab);
    printf("%d",wynik);
    return 0;
}
