#include <stdio.h>
#include <stdlib.h>

int nwd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}

int wzgp(int n)
{
    int wynik = 0;
    for (int i=1;i<n;i++)
    {
        if(nwd(i,n)==1)
        {
            wynik+=i;
        }
    }
    return wynik;
}

int main()
{
    printf("%d",wzgp(14));
    return 0;
}
