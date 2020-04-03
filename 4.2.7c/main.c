#include <stdio.h>
#include <stdlib.h>
void suma(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab2[i];
    }
    for(int i=0;i<n;i++)
    {
        tab1[i]=tab3[i];
    }

}
void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d, ",tab[i]);
    }
    printf("\n");
}
int main()
{
    int tab1[] = {1,2,3};
    int tab2[3];
    int tab3[3];
    suma(3,tab1,tab2,tab3);
    wypisz(3,tab3);
    wypisz(3,tab1);
    return 0;
}
