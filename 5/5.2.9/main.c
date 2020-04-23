#include <stdio.h>
#include <stdlib.h>
void wytnij(char napis[],int n, int m)
{
    char temp[m-n+1];
    int i=n;
    while(i<=m)
    {
        temp[i-n]=napis[i];
        i++;
    }
    temp[i-n]=0;
    napis[0]=0;
    for(int i=0;napis[i]!=0;i++)
    {
        napis[i]=temp[i];
    }
    printf("%s",temp);
}
void wytnij2(wchar_t napis[],int n, int m)
{
    wchar_t temp[m-n+1];
    int i=n;
    while(i<=m)
    {
        temp[i-n]=napis[i];
        i++;
    }
    temp[i-n]=0;
    wprintf(L"%s",temp);
}
int main()
{
    char napis[]="Kotwica";
    wchar_t napis2[]=L"Alabama";
    wytnij(napis,0,2);
    wytnij2(napis2,0,2);
    return 0;
}
