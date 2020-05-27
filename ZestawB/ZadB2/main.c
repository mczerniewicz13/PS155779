#include <stdio.h>
#include <stdlib.h>
void foo(char *n1,char *n2)
{
    int n = dl(n2);
    odwroc(n1);
    for(int i=0;i<=dl(n1);i++)
    {
        n2[n+i]=n1[i];
    }
}
void odwroc(char *napis)
{
    int n=dl(napis);
    char temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=napis[i];
    }
    for(int j=0;j<n;j++)
    {
       napis[n-1-j]=temp[j];
    }
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
    char n1[]="maly";
    char n2[]="kajak";
    foo(n1,n2);
    printf("%s\n",n2);
    return 0;
}
