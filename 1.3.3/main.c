#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    printf("Podaj 3 liczby calkowite n,m,k\n");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    int max = n;
    if(m>max)
    {
        max = m;
    }
    if(k>max)
    {
        max = k;
    }
    printf("%d",max);
    return 0;
}
