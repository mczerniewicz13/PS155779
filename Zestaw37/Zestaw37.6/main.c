#include <stdio.h>
#include <stdlib.h>
int ile(int n, int m, int tab1[n], int tab2[n])
{
    int wynik = 0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]<m)
        {
            wynik++;
        }
        if(tab2[i]<m)
        {
            wynik++;
        }
    }
    return wynik;
}
int main()
{
    int n1 = 8;
    int n2 = 5;
    int m1 = 4;
    int m2 = 3;
    int tab1[]={1,5,8,6,3,4,5,6};
    int tab2[]={5,6,4,3,2,8,7,4};
    int tab3[]={1,5,7,6,2};
    int tab4[]={5,6,9,8,4};
    printf("%d\n",ile(n1,m1,tab1,tab2));
    printf("%d",ile(n2,m2,tab3,tab4));


    return 0;
}
