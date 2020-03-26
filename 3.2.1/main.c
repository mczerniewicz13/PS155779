#include <stdio.h>
#include <stdlib.h>
int min(int*a, int*b)
{
    if(*a<*b)
    {
        return *a;
    }
    return*b;

}
int main()
{
    int x = 10;
    int y = 12;
    printf("%d",min(&x,&y));
    return 0;
}
