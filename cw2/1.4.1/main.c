#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    int wynik = 0;
    printf("Podaj n\n");
    scanf("%d",&n);
    printf("Podaj m\n");
    scanf("%d",&m);
    while(wynik<m-n)
    {
        wynik+=n;
        if(wynik>0)
        {
            printf("%d\n",wynik);
        }

    }
    return 0;
}
