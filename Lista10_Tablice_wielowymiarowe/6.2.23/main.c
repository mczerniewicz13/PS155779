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
void zamien(int **tab,int n,int m)
{
    int **temp = foo(1,m);
    for(int j=0;j<m;j++)
    {
        *(*temp+j)=*(*(tab+(n-1))+j);
    }
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=*(*(tab+(i-1))+j);
        }
    }
    for(int j=0;j<m;j++)
    {
        *(*tab+j)=*(*temp+j);
    }

}

int main()
{
    int n=3,m=3;
    int **tab = foo(n,m);
    uzupelnij(tab,n,m);
    wypisz(tab,n,m);
    printf("\n");
    zamien(tab,n,m);
    wypisz(tab,n,m);
    return 0;
}
