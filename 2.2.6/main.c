#include <stdio.h>
#include <stdlib.h>
int potega(int n, int m)
{
    int wynik = 1;
    for(int i=1;i<=m;i++)
    {
        wynik *=n;
    }

    return wynik;
}
int main()
{
    printf("%d",potega(0,5));
    return 0;
}
