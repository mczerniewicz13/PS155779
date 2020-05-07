#include <stdio.h>
#include <stdlib.h>
struct punkt{
float x;
float y;
float z;
};
void przepisz(int n,struct punkt tab1[],struct punkt tab2[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}
void wypiszStr(struct punkt p)
{
    printf("%f,%f,%f\n",p.x,p.y,p.z);
}
void wypiszTab(struct punkt tab[],int n)
{
    for(int i=0;i<n;i++)
    {
        wypiszStr(tab[i]);
    }
    printf("----\n");
}
int main()
{
    struct punkt tab1[3]={{3,2,1},{1,2,3},{1,3,2}};
    struct punkt tab2[3]={{2,2,2},{1,1,1},{0,0,0}};
    wypiszTab(tab2,3);
    przepisz(3,tab1,tab2);
    wypiszTab(tab2,3);
    return 0;
}
