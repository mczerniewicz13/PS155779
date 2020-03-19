#include <stdio.h>
#include <stdlib.h>
void funkcja()
{
    static int x = 0;
    x++;
    printf("Liczba wywolan: %d\n",x);
}
int main()
{
    funkcja();
    funkcja();
    funkcja();
    funkcja();
    funkcja();funkcja();
    return 0;
}
