#include <stdio.h>
#include <stdlib.h>
void przesuwanieP(int n, int tab[])
{
    int temp[n];
    temp[0]=tab[n-1];
    for(int i=n-1;i>0;i--)
    {
        temp[i]=tab[i-1];
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
    przesuwanieP(4,tab);
    wypisz(4,tab);
    return 0;
}
