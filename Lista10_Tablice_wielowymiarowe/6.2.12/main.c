#include <stdio.h>
#include <stdlib.h>
int **foo(int n, int m)
{
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
}
int su(int **tab,int n, int m)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            suma+=*(*(tab+i)+j);
        }
    }
    return suma;
}
int main()
{   int n = 2, m = 2;
    int **tab=foo(n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=i+j+2;
        }
    }
    printf("%d",su(tab,n,m));
    return 0;
}
