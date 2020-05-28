#include <stdio.h>
#include <stdlib.h>
int foo(char *napis)
{
    int count=0;
    int n= dl(napis);
    for(int i=0;i<n;i++)
    {
        if(napis[i]<='9')
        {
            count++;
        }
    }
    return count;
}
int dl(char *napis)
{
    int i=0;
    while(napis[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char napis[]="1aaabb75599s";
    printf("%d",foo(napis));
    return 0;
}
