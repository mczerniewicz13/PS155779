#include <stdio.h>
#include <stdlib.h>
int dlugosc(char napis[])
{
    int wynik =0;
    int i=0;
    while(napis[i]!=0)
    {
        wynik++;
        i++;
    }
    return wynik;
}
int dlugosc2(wchar_t napis[])
{
    int wynik =0;
    int i=0;
    while(napis[i]!=0)
    {
        wynik++;
        i++;
    }
    return wynik;
}
int main()
{
    char napis[5]="abcd";
    printf("%d",dlugosc(napis));
    wchar_t napis2[]=L"Alladyn";
    printf("\n%d",dlugosc2(napis2));
    return 0;
}
