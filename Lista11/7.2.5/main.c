#include <stdio.h>
#include <stdlib.h>
struct punkt10{
float tab[10];
};
void przepisz(int n,struct punkt10 tab1[],struct punkt10 tab2[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}
void wypiszStr(struct punkt10 p)
{
    for(int i=0;i<10;i++)
    {
        printf("%f ",p.tab[i]);
    }
    printf("\n");

}
void wypiszTab(struct punkt10 tab[],int n)
{
    for(int i=0;i<n;i++)
    {
        wypiszStr(tab[i]);
    }
    printf("----\n");
}
int main()
{
    struct punkt10 p1[]={{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20}};
    struct punkt10 p2[]={{0,0,0,0,0,0,0,0,0,0},{1,1,1,1,1,1,1,1,1,1}};
    wypiszTab(p2,2);
    przepisz(2,p1,p2);
    wypiszTab(p2,2);
    return 0;
}
