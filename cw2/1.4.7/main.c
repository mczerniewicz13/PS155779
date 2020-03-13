#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    printf("Podaj n i m spelniajace n<m:\n");
    scanf("%d",&n);
    scanf("%d",&m);
    int wynik=1;
    for(i=n;i<m+1;i++)
    {

        wynik*=i;
    }
    printf("%d",wynik);
    return 0;
}
