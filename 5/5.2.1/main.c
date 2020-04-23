#include <stdio.h>
#include <stdlib.h>

void wyczysc(char napis[])
{
    napis[0]=0;
}
void wyczysc2(wchar_t napis[])
{
    napis[0]=0;
}

int main()
{
    char napis[10] = "Alladyn";
    wyczysc(napis);
    printf("%s",napis);
    wchar_t napis2[]=L"Alladyn";
    wyczysc2(napis2);
    wprintf(L"%s",napis2);
    return 0;
}
