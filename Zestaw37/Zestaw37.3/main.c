#include <stdio.h>
#include <stdlib.h>
int min2(int n, int m)
{
    if(n<=m)
    {
        return n;
    }
    else{
        return m;
    }

}
int min3(int n, int m, int k)
{
    if(min2(n,m)<=min2(m,k))
    {
        return min2(n,m);
    }
    if(min2(m,k)<=min2(n,m))
    {
        return min2(m,k);
    }

}
int main()
{
    int n = 8;
    int m = 3;
    int k = 1;
    int u = 0;
    printf("%d\n",min2(n,m));
    printf("%d\n",min2(m,k));
    printf("%d\n",min3(n,m,k));
    printf("%d\n",min3(u,m,k));
    return 0;
}
