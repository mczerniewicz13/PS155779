#include <stdio.h>
#include <stdlib.h>
int maximumix(int n, int tab[])
{
    int maxix = 0;
    int max = tab[0];
    for(int i=1;i<n;i++)
    {
       if(tab[i]>max)
       {
           maxix = i;
           max = tab[i];
       }
    }
    return maxix;

}
int main()
{
    int tab[] = {1, 7, 16, 2};
    printf("%d",maximumix(4,tab));
    return 0;
}
