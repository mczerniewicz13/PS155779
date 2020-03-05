#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Podaj liczbe wymierna\n");
    scanf("%f",&x);
    printf("Twoja liczba w notacji wykladniczej to: %+.0e",x);
    return 0;
}
