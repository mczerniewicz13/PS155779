#include <stdio.h>
#include <stdlib.h>
int d5(int n,int tab1[n],int tab2[n])
{
    int licz=0;
    int par=0;
    for(int i=0;i<n;i+=2)
    {
        par++;
        if(tab1[i]==tab2[i])
        {
            licz++;
        }
    }
    if(licz == par)
    {
        return 1;
    }
    return 0;

}
int main()
{
    int tab1[]={1,5,2,6,5};
    int tab2[]={1,8,2,7,3};
    printf("%d",d5(5,tab1,tab2));
    return 0;
}
