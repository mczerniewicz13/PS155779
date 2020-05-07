#include <stdio.h>
#include <stdlib.h>
struct student{
char imie[20];
char nazwisko[50];
char adres[100];
char pesel[12];
char kierunek[20];
char numer[20];
};
void dodaj(struct student *s)
{
    printf("Imie:\n");
    scanf("%s\n",&s->imie);
    printf("Nazwisko:\n");
    scanf("%s\n",&s->nazwisko);
    printf("Adres:\n");
    scanf("%s\n",&s->adres);
    printf("Pesel:\n");
    scanf("%s\n",&s->pesel);
    printf("Kierunek:\n");
    scanf("%s\n",&s->kierunek);
    printf("Numer legitymacji:\n");
    scanf("%s\n",&s->numer);
}
int main()
{
    struct student nowy;
    dodaj(&nowy);
    printf("%s\n%s\n%s\n%s\n%s\n%s\n",nowy.imie,nowy.nazwisko,nowy.adres,nowy.pesel,nowy.kierunek,nowy.numer);
    return 0;
}
