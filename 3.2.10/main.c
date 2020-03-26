#include <stdio.h>
#include <stdlib.h>
double* pamiec()
{
return malloc(sizeof(double));
}
int main()
{
    printf("%p",pamiec());
    return 0;
}
