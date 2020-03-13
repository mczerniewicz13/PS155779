#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int wynik=0;
    printf("Podaj nieujemne calkowite n:\n");
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
    {
        wynik=wynik+(i*i);
    }
    printf("%d",wynik);
    return 0;
}
