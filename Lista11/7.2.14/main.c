#include <stdio.h>
#include <stdlib.h>
enum czworokat {kwadrat,prostokat,romb,trapez,rownoleglobok,deltoid};
int main()
{
    enum czworokat x = kwadrat;
    int a = 5;
    int b = 6;
    switch(x)
    {
    case kwadrat:
        printf("%d",a*a);
        break;
    case prostokat:
        printf("%d",a*b);
        break;
    default:
        printf("Podaj wysokosc\n");
    }

    return 0;
}
