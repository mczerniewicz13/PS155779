#include <stdio.h>
#include <stdlib.h>
enum Plec
{ mezczyzna,kobieta};
enum mezczyzna{ wolny,zonaty};
enum kobieta{ wolna,mezatka};
union czlowiek{
    enum mezczyzna m;
    enum kobieta k;
    };
struct dane_osobowe{
char imie[30];
char nazwisko[30];
enum Plec plec;
union czlowiek stan_cywilny;
};
void wczytaj(struct dane_osobowe tab[],int n)
{
    int i,plec;
    for(i=0;i<n;i++)
    {
        printf("Podaj plec: kobieta(0), mezczyzna(1):\n");
        scanf("%d",&plec);
        if(plec==0)
            tab[i].plec=kobieta;
        else tab[i].plec=mezczyzna;
        printf("Podaj imie:\n");
        scanf("%s",tab[i].imie);
        printf("Podaj nazwisko:\n");
        scanf("%s",tab[i].nazwisko);
        printf("Podaj stan cywilny:\n");
        if(tab[i].plec==kobieta)
        {
            printf("wolna = 0, mezatka = 1:\n");
            scanf("%d",&tab[i].stan_cywilny.k);
        }
        else
        {
          printf("wolny = 0, zonaty = 1:\n");
          scanf("%d",&tab[i].stan_cywilny.m);
        }
    }
}
int main()
{
    struct dane_osobowe s[1];
    wczytaj(s,1);
    return 0;
}
