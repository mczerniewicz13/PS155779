#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1,l2,l3;
    double srednia;
    printf("Podaj 3 liczby calkowite\n");
    scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&l3);
    srednia = (double)(l1+l2+l3)/3;
    printf("Ich srednia arytmetyczna to: %f",srednia);
    return 0;
}
