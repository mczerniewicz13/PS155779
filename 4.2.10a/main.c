#include <stdio.h>
#include <stdlib.h>
int maximum(int n, int tab[])
{
    int max = tab[0];
    for(int i=1;i<n;i++)
    {
       if(tab[i]>max)
       {
           max = tab[i];
       }
    }
    return max;

}
int main()
{
    int tab[] = {1, 7, 16, 2};
    printf("%d",maximum(4,tab));
    return 0;
}
