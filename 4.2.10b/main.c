#include <stdio.h>
#include <stdlib.h>
int minimum(int n, int tab[])
{
    int min = tab[0];
    for(int i=1;i<n;i++)
    {
       if(tab[i]<min)
       {
           min = tab[i];
       }
    }
    return min;

}
int main()
{
    int tab[] = {1, 7, 16, 2};
    printf("%d",minimum(4,tab));
    return 0;
}
