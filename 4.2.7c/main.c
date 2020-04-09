#include <stdio.h>
#include <stdlib.h>
void zamiana(int n, int tab1[], int tab2[], int tab3[])
{
    int temp1[n],temp2[n],temp3[n];
    for(int i=0;i<n;i++)
    {
        temp2[i]=tab2[i];
        tab2[i]=tab1[i];
    }
    for(int i=0;i<n;i++)
    {
        temp3[i]=tab3[i];
        tab3[i]=temp2[i];
    }
    for(int i=0;i<n;i++)
    {
        tab1[i]=temp3[i];
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
    int tab2[] = {4,5,6};
    int tab3[] = {7,8,9};
    zamiana(3,tab1,tab2,tab3);
    wypisz(3,tab1);
    wypisz(3,tab2);
    wypisz(3,tab3);
    return 0;
}
