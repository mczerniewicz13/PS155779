#include <stdio.h>
#include <stdlib.h>
void foo(double **tab1,double **tab2,double **tab3)
{
    int temp=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int p=0;p<2;p++)
            {
                temp+=*(*(tab1+i)+p)*(*(*(tab2+p)+j));
            }
            *(*(tab3+i)+j)=temp;
            temp=0;
        }
    }
}
int **tworz(int n)
{
    double **tab=malloc(n*sizeof(double*));
    for(int j=0;j<n;j++)
    {
        *(tab+j)=malloc(n*sizeof(double));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *(*(tab+i)+j)=i+5;
        }
    }
    return tab;
}
int main()
{
    double **tab1=tworz(2);
    double **tab2=tworz(2);
    double **tab3=malloc(2*sizeof(double*));
    *tab3=malloc(2*sizeof(double));
    *(tab3+1)=malloc(2*sizeof(double));
    foo(tab1,tab2,tab3);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%f,",*(*(tab3+i)+j));
        }
        printf("\n");
    }
    return 0;
}
