#include <stdio.h>
#include <stdlib.h>
void suma(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if(tab1[i] > tab2[i])
        {
            tab3[i] = tab1[i];
        }
        else{
            tab3[i] = tab2[i];
        }
    }

}
void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d, ",tab[i]);
    }
}
int main()
{
    int tab1[] = {1,2,3};
    int tab2[] = {3,2,1};
    int tab3[3];
    suma(3,tab1,tab2,tab3);
    wypisz(3,tab3);
    return 0;
}
