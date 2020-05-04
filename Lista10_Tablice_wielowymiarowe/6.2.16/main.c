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
int foo2(int **tab,int n, int m)
{
    float srednia=0;
    int index=0;
    for(int i=0;i<n;i++)
    {
       float wynik = 0;
       for(int j=0;j<m;j++)
       {
           wynik+=*(*(tab+i)+j);
           wynik=wynik/m;
       }
       if(wynik>srednia)
       {
           index = i;
           srednia = wynik;
       }
    }
    return index;
}
int main()
{
    int n=3;
    int m=2;
    int **tab=foo(n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            *(*(tab+i)+j)=i+j+3;
        }
    }
    printf("%d",foo2(tab,n,m));
    return 0;
}
