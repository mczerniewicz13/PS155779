#include <stdio.h>
#include <stdlib.h>

int nwd(int n, int m)
{

    while(n!=m)
    {
        if(n>m)
        {
            n-=m;
        }
        else
        {
            m-=n;
        }
    }

}

int main()
{
    printf("%d",nwd(12,18));
    return 0;
}
