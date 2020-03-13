#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k,i;
    printf("Podaj 3 liczby calkowite dodatnie n, m, k:\n");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(i=m+1; i<k; i++)
    {
        if(i%n == 0)
        {
            printf("%d\n",i);

        }

    }
    return 0;
}
