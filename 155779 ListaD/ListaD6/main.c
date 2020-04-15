#include <stdio.h>
#include <stdlib.h>
int d6(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n%2==1)
    {
        return 2*d6(n-1)-2;
    }
    if(n%2==0)
    {
        return -d6(n-1)+3;
    }
}
int main()
{
    printf("%d\n",d6(0));
    printf("%d\n",d6(1));
    printf("%d\n",d6(2));
    printf("%d\n",d6(3));
    printf("%d\n",d6(4));
    printf("%d\n",d6(5));
    return 0;
}
