#include <stdio.h>
#include <stdlib.h>
void wczytaj(char napis[])
{
    scanf("%s",napis);

}
void wczytaj2(wchar_t napis[])
{
    wscanf(L"%s",napis);

}
int main()
{
    char napis[64];
    wchar_t napis2[64];
    wczytaj(napis);
    printf("%s\n",napis);
    wczytaj2(napis2);
    wprintf(L"%s",napis2);
    return 0;
}
