#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita n:\n");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",-n);
    }
    return 0;
}
