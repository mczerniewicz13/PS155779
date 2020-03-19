#include <stdio.h>
#include <stdlib.h>

int reku(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return reku(n-1) + 2*reku(n-2) + 3;


}
int main()
{
    printf("%d",reku(3));
    return 0;
}
