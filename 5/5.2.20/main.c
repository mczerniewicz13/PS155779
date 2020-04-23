#include <stdio.h>
#include <stdlib.h>
char *godzina(int godz,int min, int sek)
{
    char *wynik=malloc(8*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;
}
int main()
{
    printf("%s",godzina(2,54,15));
    return 0;
}

