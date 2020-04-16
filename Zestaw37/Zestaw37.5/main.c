#include <stdio.h>
#include <stdlib.h>
static int sum = 0;
void suma(int n)
{
    if(n==1)
    {
        sum+=1;

    }
    else{
        sum+=(n-1);
        suma(n-1);
    }
}

int main()
{
    suma(36);
    printf("%d",sum-1);
    return 0;
}
