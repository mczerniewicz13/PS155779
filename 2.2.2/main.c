#include <stdio.h>
#include <stdlib.h>
int silnia(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int wynik=1;

    for(int i=2;i<=n;i++)
    {
      wynik*=i;
    }
    return wynik;
}

int main()
{
    int a=6;
    int b=silnia(a);
    printf("%d",b);
    return 0;
}
