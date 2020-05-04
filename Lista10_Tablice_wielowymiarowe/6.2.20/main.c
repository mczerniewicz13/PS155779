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
void foo2(int **tab1,int **tab2,int n, int m)
{
    int **temp=foo(n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(temp+i)+j)=*(*(tab2+i)+j);
            *(*(tab2+i)+j)=*(*(tab1+i)+j);
            *(*(tab1+i)+j)=*(*(temp+i)+j);
        }
    }
}
void wypisz(int **tab,int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d %d]=%d\n",i,j,*(*(tab+i)+j));
        }
    }
}
void uzupelnij(int **tab,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=i+j+3;
        }
    }
}
void uzupelnij2(int **tab,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=i+j+5;
        }
    }
}
int main()
{
    int n = 3, m = 3;
    int **tab=foo(n,m);
    int **tab2=foo(n,m);

    uzupelnij(tab,n,m);
    uzupelnij2(tab2,n,m);

    wypisz(tab,n,m);
    printf("\n");
    wypisz(tab2,n,m);
    printf("\n");

    foo2(tab,tab2,n,m);
    wypisz(tab,n,m);
    printf("\n");
    wypisz(tab2,n,m);
    return 0;
}
