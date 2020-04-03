#include <stdio.h>
#include <stdlib.h>
void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d, ",tab[i]);
    }
    printf("\n");
}

void przepisywanie(int n, int tab1[], int tab2[], int tab3[])
{
    int p = 0;
    int np = 0;
    for(int i=0; i<n*2; i++)
    {
      if(i % 2 == 1)
      {
          tab3[i] = tab1[np];
          np++;
      }
      if(i % 2 == 0)
      {
          tab3[i] = tab2[p];
          p++;
      }
    }
}
int main()
{
    int tab1[] = {5,10,15};
    int tab2[] = {4,8,12};
    int tab3[6];
    przepisywanie(3, tab1, tab2, tab3);
    wypisz(6,tab3);
    return 0;
}
