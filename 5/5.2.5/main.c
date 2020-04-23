#include <stdio.h>
#include <stdlib.h>
void przepisz(char napis1[],char napis2[])
{
    int i = 0;
    while(napis1[i]!=0)
    {
        napis2[i]=napis1[i];
        i++;
    }
    napis2[i]=0;

}
void przepisz2(wchar_t napis1[],wchar_t napis2[])
{
    int i = 0;
    while(napis1[i]!=0)
    {
        napis2[i]=napis1[i];
        i++;
    }
    napis2[i]=0;

}
int main()
{
    char wyraz1[6]="abcd";
    char wyraz2[6]="u";
    przepisz(wyraz1,wyraz2);
    printf("%s",wyraz2);

    wchar_t napis1[]=L"Albert";
    wchar_t napis2[]=L"Poziomica";
    przepisz2(napis1,napis2);
    wprintf(L"\n%s",napis2);
    return 0;
}
