#include <stdio.h>
#include <stdlib.h>
int maximum(int n, int tab[])
{
    int max=0;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        if(tab[i]<0)
        {
            temp[i] = - tab[i];
        }
        else{
            temp[i] = tab[i];
        }
    }

    max = temp[0];
    int ix = 0;

    for(int i=1;i<n;i++)
    {
       if(temp[i]>max)
       {
           max = temp[i];
           ix = i;
       }
    }

    return ix;

}
int main()
{
    int tab[] = {1, 7, -16, 2};
    printf("%d",maximum(4,tab));
    return 0;
}
