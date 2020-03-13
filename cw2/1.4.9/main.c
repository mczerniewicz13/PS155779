#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,e,nwd,i;
    printf("Podaj dwie dodatnie liczby calkowite n i m:\n");
    scanf("%d",&n);
    scanf("%d",&m);
    int max = n;
    if(m>max)
    {
        max = m;
    }
    for(i=1;i<max;i++)
    {
        if(n%i == 0)
        {
            if(m%i == 0)
            {
                nwd=i;
            }
        }
    }
    printf("%d",nwd);
    return 0;
}
