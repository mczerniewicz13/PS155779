#include <stdio.h>
#include <stdlib.h>
void przepisywanie(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n*2;i++)
    {
      if(i<n)
      {
          tab3[i] = tab1[i];
      }
      if(i>=n)
      {
          tab3[i] = tab2[i-n];
      }
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
    int tab1[] = {2,4,8};
    int tab2[] = {3,9,27};
    int tab3[6];
    przepisywanie(3,tab1,tab2,tab3);
    wypisz(6,tab3);
    return 0;
}
