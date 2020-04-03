#include <stdio.h>
#include <stdlib.h>
void odwracanie(int n, int tab[])
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=tab[n-1-i];
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
    odwracanie(4,tab);
    wypisz(4,tab);
    return 0;
}
