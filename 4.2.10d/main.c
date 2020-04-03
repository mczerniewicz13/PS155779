#include <stdio.h>
#include <stdlib.h>
int minimumix(int n, int tab[])
{
    int minix = 0;
    int min = tab[0];
    for(int i=1;i<n;i++)
    {
       if(tab[i]<min)
       {
           minix = i;
           min = tab[i];
       }
    }
    return minix;

}
int main()
{
    int tab[] = {1, 7, 16, 2};
    printf("%d",minimumix(4,tab));
    return 0;
}
