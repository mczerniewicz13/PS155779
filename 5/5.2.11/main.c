#include <stdio.h>
#include <stdlib.h>
int czyNalezy(char *napis,char a)
{
    for(int i=0;napis[i]!=0;i++)
    {
        if(napis[i]==a)
        {
            return 1;
        }
    }
    return 0;
}
void usun(char *napis,int i)
{
    for(int k=i;napis[k]!=0;k++)
    {
        napis[k]=napis[k+1];
    }
}
void wytnijzw(char *napis1,char *napis2)
{
    for(int i=0;napis1[i]!=0;i++)
    {
        if(czyNalezy(napis2,napis1[i])==1)
        {
            usun(napis1,i);
            i--;
        }
    }
}



int czyNalezy2(wchar_t napis[],wchar_t a)
{
    for(int i=0;napis[i]!=0;i++)
    {
        if(napis[i]==a)
        {
            return 1;
        }
    }
    return 0;
}
void usun2(wchar_t napis[],int i)
{
    for(int k=i;napis[k]!=0;k++)
    {
        napis[k]=napis[k+1];
    }
}
void wytnijzw2(wchar_t napis1[],wchar_t napis2[])
{
    for(int i=0;napis1[i]!=0;i++)
    {
        if(czyNalezy2(napis2,napis1[i])==1)
        {
            usun2(napis1,i);
            i--;
        }
    }
}


int main()
{
    char n1[]="Alabama";
    char n2[]="Anna";
    wchar_t n3[]=L"Kotwica";
    wchar_t n4[]=L"aciw";
    wytnijzw(n1,n2);
    wytnijzw2(n3,n4);
    printf("%s",n1);
    wprintf(L"\n%s",n3);
    return 0;
}
