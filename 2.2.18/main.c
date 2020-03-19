#include <stdio.h>
#include <stdlib.h>

float pseudo(int n)
{
    if(n==0)
    {
        return 0.3;
    }
    return 1 - pseudo(n-1)*pseudo(n-1);
}

int main()
{
    printf("%f",pseudo(6));
    return 0;
}
