#include <stdio.h>
#include <stdlib.h>
void przesuwanieL(int n, int tab[])
{
    int temp[n];
    temp[n-1]=tab[0];
    for(int i=0;i<n-1;i++)
    {
        temp[i]=tab[i+1];
    }

    for(int i=0;i<n;i++)
    {
        tab[i]=temp[i];
    }
}

void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d, ",tab[i]);
    }
}

int main()
{
    int tab[]= {1, 2, 3, 4};
    przesuwanieL(4,tab);
    wypisz(4,tab);
    return 0;
}
