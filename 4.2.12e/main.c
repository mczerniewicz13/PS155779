#include <stdio.h>
#include <stdlib.h>
void malejaco(int n, int tab[])
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i] = tab[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(temp[j]<tab[j+1])
            {
                temp[j] = tab[j+1];
                temp[j+1] = tab[j];
            }
            for(int i=0;i<n;i++)
            {
                tab[i]=temp[i];
            }
        }

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
    int tab[]= {1, 2, -4, 8, 6, 3};
    malejaco(6,tab);
    wypisz(6,tab);
    return 0;
}
