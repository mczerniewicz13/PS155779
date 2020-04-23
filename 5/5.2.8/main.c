#include <stdio.h>
#include <stdlib.h>
void duze(char napis[])
{
    for(int i=0;napis[i]!=0;i++)
    {
        if(napis[i]>='a' && napis[i]<='z')
        {
            napis[i]-=32;
        }
    }
}
int main()
{
    char napis[]="Alladyn";
    duze(napis);
    printf("%s",napis);
    return 0;
}
