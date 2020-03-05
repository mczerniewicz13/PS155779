#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x;
    printf("Podaj liczbe wymierna\n");
    scanf("%f",&x);
    printf("Wartosc bezwzgledna to: %f",fabs(x));
    return 0;
}
