#include <stdio.h>
#include <stdlib.h>
int* pamiec(int n)
{
return malloc(n*sizeof(int));
}
int main()
{
    printf("%p",pamiec(10));
    return 0;
}
