#include <stdio.h>
#include <stdlib.h>
int d3(int m,int n, int k)
{
    if(m<k)
    {
        printf("m<k!");
        return -1;
    }
   for(int i=k+1;i<m;i++)
   {
       if(i%n == 0)
       {
           printf("%d ",i);
       }
   }
}
int main()
{
    d3(100,6,17);
    return 0;
}
