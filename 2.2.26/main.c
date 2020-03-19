#include <stdio.h>
#include <stdlib.h>

int reku(int n)
{
    if(n==0||n==1||n==2)
    {
        return 1;
    }

    switch(n%3)
    {
        case 0: return reku(n-1) + reku(n-2);
        case 1: return 5*reku(n-1) + 4;
        case 2: return reku(n-1);
    }
}

int main()
{
    printf("%d",reku(5));
    return 0;
}
