#include <stdio.h>
#include <stdlib.h>
void fun(int n,int m,int **tab,char *sciezka)
{
    int wynik=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            wynik+=*(*(tab+i)+j);
        }
    }
    if(wynik%2==0)
    {
        printf("%c",sciezka[0]);
    }
    else
    {
        printf("%c",sciezka[1]);
    }
}

int main()
{
    char napis[]="tn";
    int **tab=malloc(2*sizeof(int*));
    *tab=malloc(3*sizeof(int));
    *(tab+1)=malloc(3*sizeof(int));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(tab+i)+j)=i+j;
        }
    }
    fun(2,3,tab,napis);
    return 0;
}
