#include <stdio.h>
#include <stdlib.h>
struct szkola{
char *adres;
int numer;
};
void foo(int n,struct szkola tab[n])
{
    struct szkola temp[n];
    int pomoc;
    for(int i=0;i<n;i++)
    {
        temp[i].adres=tab[i].adres;
        temp[i].numer=tab[i].numer;
    }
    for (int k = 0; k<n-1; k++)
    {
		for (int j=0; j<n-1-k; j++)
		{
			if (temp[j].numer > temp[j+1].numer)
			{
				pomoc = temp[j+1].numer;
				temp[j+1].numer = temp[j].numer;
				temp[j].numer = pomoc;
			}
		}
    }
    for(int l=0;l<n;l++)
    {
        printf("%s ",temp[l].adres);
        printf("%d",temp[l].numer);
        printf("\n");
    }


}
int main()
{
    struct szkola tab[3];
    tab[0].adres="majowa";
    tab[0].numer=2;
    tab[1].adres="sloneczna";
    tab[1].numer=1;
    tab[2].adres="warszawska";
    tab[2].numer=3;
    foo(3,tab);
    return 0;
}
