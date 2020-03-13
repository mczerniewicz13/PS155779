#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj liczby calkowite n i m:\n");
    scanf("%d",&n);
    scanf("%d",&m);
    int max = n;
    if(m>max)
    {
        max = m;
    }
    printf("%d",max);
    return 0;
}
