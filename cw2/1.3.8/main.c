#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,h;
    int wybor;
    printf("Wybierz figure (podaj numer):\n1.Trojkat\n2.Kwadrat\n3.Prostokat\n");
    scanf("%d",&wybor);
    switch (wybor){

case 1:
    printf("Podaj dlugosc podstawy\n");
    scanf("%f",&a);
    printf("Podaj dlugosc wysokosci\n");
    scanf("%f",&h);
    printf("Pole trojkata wynosi %f",0.5*a*h);
    break;

case 2:
    printf("Podaj dlugosc boku\n");
    scanf("%f",&a);
    printf("Pole kwadratu wynosi %f",a*a);
    break;

case 3:
    printf("Podaj dlugosc pierwszego boku\n");
    scanf("%f",&a);
    printf("Podaj dlugosc drugiego boku\n");
    scanf("%f",&b);
    printf("Pole prostokata wynosi %f",a*b);
    break;

    }

    return 0;
}
